/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:00:55 by hasabir           #+#    #+#             */
/*   Updated: 2022/04/22 07:54:36 by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_min_args(t_stack *a, int n)
{
	int	j;

	if (n == 2 && issorted(a) == 1)
		write(1, sa(a), 3);
	else
	{
		while (issorted(a) == 1)
		{	
			n = a->top;
			while (n > 0 && issorted(a) == 1)
			{
				j = 0;
				if (a->stack[a->top] < a->stack[a->top - 1]
					&& a->stack[a->top] > a->stack[j])
					write(1, sa(a), 3);
				if (a->stack[j] < a->stack[n])
					write(1, ra(a), 3);
				if (a->stack[++j] < a->stack[n])
					write(1, sa(a), 3);
				n--;
			}
		}
	}
	return ;
}

void	sort_med_args(t_stack *stack_a, t_stack *stack_b, int n)
{
	int	i;
	int	j;

	i = stack_a->top;
	while (i > n / 2)
	{
		top_min_arg(stack_a, i + 1);
		write(1, pb(stack_a, stack_b), 3);
		i--;
	}
	i = stack_a->top;
	j = stack_b->top;
	sort_min_args(stack_a, i + 1);
	while (j > -1)
	{
		write(1, pa(stack_a, stack_b), 3);
		j--;
	}
	return ;
}
