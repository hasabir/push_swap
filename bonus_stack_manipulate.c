/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_stack_manipulate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 06:52:43 by hasabir           #+#    #+#             */
/*   Updated: 2022/04/21 09:54:54 by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_push_swap.h"

t_stack	*create_stack(int size)
{
	t_stack	*new_stack;
	int		*a;

	if (size < 2)
		exit (0);
	new_stack = (t_stack *)malloc(sizeof(t_stack));
	if (!new_stack)
		exit (0);
	a = malloc(sizeof(int) * size);
	if (!a)
		exit (0);
	new_stack->top = -1;
	new_stack->max_size = size;
	new_stack->stack = a;
	return (new_stack);
}

void	push(int arg, t_stack *stack_ab)
{
	stack_ab->top++;
	stack_ab->stack[stack_ab->top] = arg;
	return ;
}

int	pop(t_stack *stack_ab)
{
	int	stock;

	stock = stack_ab->stack[stack_ab->top];
	stack_ab->top--;
	return (stock);
}
