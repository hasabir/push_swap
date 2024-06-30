/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:28:02 by hasabir           #+#    #+#             */
/*   Updated: 2022/04/21 09:57:26 by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	seartch_min_arg(t_stack	*stacks)
{
	int	i;
	int	min;

	i = stacks->top;
	min = i;
	while (i > 0)
	{
		if (stacks->stack[min] > stacks->stack[i - 1])
			min = i - 1;
		i--;
	}
	return (min);
}

void	top_min_arg(t_stack *stack_a, int n)
{
	int	i;
	int	min;

	i = stack_a->top;
	min = seartch_min_arg(stack_a);
	if (min >= n / 2)
	{
		while (min < i)
		{
			write(1, ra(stack_a), 3);
			min++;
		}
	}
	else if (min < n / 2)
	{
		while (min >= 0)
		{
			write (1, rra(stack_a), 4);
			min--;
		}
	}
	return ;
}

int	*subnbr(t_stack *stack_a, int start, int size)
{
	int	*p;
	int	i;

	p = malloc((size - 1) * sizeof(int));
	if (!p)
		exit (0);
	i = 0;
	while (i < size)
	{
		p[i] = stack_a->tmp[start];
		start++;
		i++;
	}
	return (p);
}

int	nbrschr(int s, int *p, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (p[i] == s)
			return (i);
		i++;
	}
	return (-1);
}

int	*stackcopy(t_stack	*stack_a)
{
	int	i;

	stack_a->tmp = (int *)malloc(sizeof(int) * stack_a->max_size - 1);
	if (!stack_a->tmp)
		exit (0);
	i = 0;
	while (i <= stack_a->top)
	{
		stack_a->tmp[i] = stack_a->stack[i];
		i++;
	}
	return (stack_a->tmp);
}
