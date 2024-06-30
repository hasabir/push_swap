/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_push_swap_mvs.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 07:16:44 by hasabir           #+#    #+#             */
/*   Updated: 2022/04/22 08:23:51 by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_push_swap.h"

char	*pb(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->top == -1)
		return ("");
	push(pop(stack_a), stack_b);
	return ("pb\n");
}

char	*ra(t_stack *stack_a)
{
	int	i;
	int	swap;

	if (stack_a->top <= 0)
		return ("");
	i = stack_a->top;
	while (i > 0)
	{
		swap = stack_a->stack[i];
		stack_a->stack[i] = stack_a->stack[i - 1];
		stack_a->stack[i - 1] = swap;
		i--;
	}
	return ("ra\n");
}

char	*rb(t_stack *stack_b)
{
	ra(stack_b);
	return ("rb\n");
}

char	*rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
	return ("rr\n");
}

char	*rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	return ("rrr\n");
}
