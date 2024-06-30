/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_push_swap_moves3.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:07:12 by hasabir           #+#    #+#             */
/*   Updated: 2022/04/22 08:21:50 by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_push_swap.h"

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

char	*sb(t_stack *stack_b)
{
	sa(stack_b);
	return ("sb\n");
}

char	*pa(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b->top == -1)
		return ("");
	push(pop(stack_b), stack_a);
	return ("pa\n");
}

char	*ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
	return ("ss\n");
}
