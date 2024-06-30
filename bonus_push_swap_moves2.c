/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_push_swap_moves2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 07:18:58 by hasabir           #+#    #+#             */
/*   Updated: 2022/04/22 08:22:53 by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_push_swap.h"

char	*rra(t_stack *stack_a)
{
	int	i;
	int	swap;

	if (stack_a->top <= 0)
		return ("");
	i = 0;
	while (i != stack_a->top)
	{
		swap = stack_a->stack[i];
		stack_a->stack[i] = stack_a->stack[i + 1];
		stack_a->stack[i + 1] = swap;
		i++;
	}
	return ("rra\n");
}

char	*rrb(t_stack *stack_b)
{
	rra(stack_b);
	return ("rrb\n");
}
