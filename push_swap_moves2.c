/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_moves2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:00:45 by hasabir           #+#    #+#             */
/*   Updated: 2022/04/22 08:25:15 by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

char	*printmvs(char	*stock, char *mv)
{
	if (!stock)
	{
		stock = ft_strdup(mv);
		return (stock);
	}
	if (stock[0] == 'r' && mv[0] == 'r' && stock[1] != mv[1])
	{
		write(1, "rr\n", 3);
		free (stock);
		return (0);
	}
	else
		write(1, stock, ft_strlen(stock));
	free(stock);
	stock = ft_strdup(mv);
	return (stock);
}

char	*printmv(char	*stock, char *mv)
{
	if (!stock)
	{
		stock = ft_strdup(mv);
		return (stock);
	}
	else if (stock[0] == 'r' && mv[0] == 'r' && stock[1] == 'r' && mv[1] == 'r'
		&& stock[2] != mv[2])
	{
		write(1, "rrr\n", 4);
		free (stock);
		return (0);
	}
	else
		write(1, stock, ft_strlen(stock));
	free(stock);
	stock = ft_strdup(mv);
	return (stock);
}

int	ft_printrb(int j, t_stack *b, char **stock, int n)
{
	if (n == 0)
	{
		while (b->top > 0 && b->stack[b->top] < b->stack[b->top - 1])
		{
			*stock = printmv(*stock, rb(b));
			j++;
		}
	}
	else
	{
		while (j > -1 && b->stack[b->top] < b->stack[0])
		{
			*stock = printmv(*stock, rrb(b));
			j--;
		}
	}
	return (j);
}
