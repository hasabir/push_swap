/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_moves.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:53:14 by hasabir           #+#    #+#             */
/*   Updated: 2022/04/22 08:24:46 by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*sa(t_stack *stack_a)
{
	int	i;
	int	swap;

	if (stack_a->top < 1)
		return ("");
	i = stack_a->top;
	swap = stack_a->stack[i];
	stack_a->stack[i] = stack_a->stack[i - 1];
	stack_a->stack[i - 1] = swap;
	return ("sa\n");
}

char	*pa(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b->top == -1)
		return ("");
	push(pop(stack_b), stack_a);
	return ("pa\n");
}

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
