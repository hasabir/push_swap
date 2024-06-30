/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:20:02 by hasabir           #+#    #+#             */
/*   Updated: 2022/04/22 08:01:47 by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_printmv(int j, t_stack *a, t_stack *b, char **stock)
{
	int	i;

	i = -1;
	while (b->top > -1 && a->top < a->max_size)
	{
		j = ft_printrb(j, b, stock, 0);
		while (i > -1 && b->stack[b->top] < a->stack[0])
		{
			*stock = printmv(*stock, rra(a));
			i--;
		}
		while (b->stack[b->top] > a->stack[a->top])
		{
			*stock = printmv(*stock, ra(a));
			i++;
		}
		if (b->stack[b->top] < a->stack[a->top])
		{
			*stock = printmv(*stock, pa(a, b));
			ft_printrb(j, b, stock, 1);
		}
	}
	return (i);
}

void	sort(t_stack *a, t_stack *b)
{
	int		i;
	char	*stock;

	stock = 0;
	if (a->top == -1)
		stock = printmv(stock, pa(a, b));
	i = ft_printmv(-1, a, b, &stock);
	while (i > -1)
	{
		stock = printmv(stock, rra(a));
		i--;
	}
	write (1, stock, ft_strlen(stock));
	free (stock);
}

void	push_b_swp(t_stack *stack_a, t_stack *stack_b, int end, int start)
{
	int			i;
	char		*stock;
	static int	*p;

	stock = 0;
	p = subnbr(stack_a, start, end - start);
	while (stack_b->top < end - start - 1)
	{
		i = nbrschr(stack_a->stack[stack_a->top], p, end - start);
		if (i != -1)
		{
			if (i >= 0 && i < (end - start) / 2)
			{
				stock = printmvs(stock, pb(stack_a, stack_b));
				stock = printmvs(stock, rb(stack_b));
			}
			else if (i < (end - start) && i >= (end - start) / 2)
				stock = printmvs(stock, pb(stack_a, stack_b));
		}
		else
			stock = printmvs(stock, ra(stack_a));
	}
	write (1, stock, ft_strlen(stock));
	free (stock);
	free (p);
}

void	ft_push_b(int *i, int *start, int *end, int *size)
{
	*start -= *size / *i;
	*end += *size / *i;
	if ((*end <= *size && *end >= *size - (*size / *i))
		&& (*start >= 0 && *start <= (*size / *i)))
	{
		*start = 0;
		*end = *size;
	}
}

void	push_b(t_stack *stack_a, t_stack *stack_b, int size)
{
	int	start;
	int	end;
	int	mid;
	int	i;

	mid = size / 2;
	if (stack_a->max_size <= 150)
	{
		start = mid - size / 8;
		end = mid + size / 8;
		i = 8;
	}
	else
	{
		start = mid - size / 16;
		end = mid + size / 16;
		i = 16;
	}
	while (start >= 0 && end <= stack_a->max_size)
	{
		push_b_swp(stack_a, stack_b, end, start);
		ft_push_b(&i, &start, &end, &size);
	}
	return ;
}
