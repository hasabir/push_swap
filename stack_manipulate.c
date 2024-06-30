/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_manipulate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:27:50 by hasabir           #+#    #+#             */
/*   Updated: 2022/04/21 09:38: by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack(int size)
{
	t_stack	*new_stack;

	if (size < 2)
		exit (0);
	new_stack = (t_stack *)malloc(sizeof(t_stack));
	if (!new_stack)
		exit (0);
	new_stack->top = -1;
	new_stack->max_size = size;
	new_stack->stack = malloc(sizeof(int) * size);
	if (!new_stack->stack)
		exit (0);
	new_stack->tmp = 0;
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
