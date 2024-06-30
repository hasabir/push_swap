/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 16:42:05 by hasabir           #+#    #+#             */
/*   Updated: 2022/04/22 08:35:44 by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(void)
{
	write(2, "Error\n", 6);
	exit (0);
	return ;
}

int	ft_atoi(char *arg)
{
	long	n;
	int		signe;

	n = 0;
	signe = 1;
	if ((*arg == '-' || *arg == '+') && *(arg + 1) != '\0')
	{
		if (*arg == '-')
			signe = -1;
		arg++;
	}
	while (*arg && *arg >= '0' && *arg <= '9')
	{
		n = n * 10 + *arg - '0';
		arg++;
	}
	if (n >= INT_MAX || *arg != '\0')
		ft_exit ();
	signe = n * signe;
	return (signe);
}

void	isduplicate(t_stack *stack_a, int arg)
{
	int	i;

	i = stack_a->top;
	if (i == -1)
		return ;
	while (stack_a->stack[i] != arg && i > -1)
		i--;
	if (stack_a->stack[i] == arg && i != -1)
		ft_exit();
	return ;
}

int	issorted(t_stack *stack_a)
{
	int	i;
	int	j;

	i = stack_a->top;
	j = i - 1;
	while (i > 0 && stack_a->stack[i] < stack_a->stack[i - 1])
		i--;
	if (i == 0)
		return (0);
	return (1);
}

void	push_check(t_stack *stack_a, int size, char *arg[])
{
	int	stock;

	while (size > 1)
	{
		stock = ft_atoi(arg[size - 1]);
		isduplicate(stack_a, stock);
		push(stock, stack_a);
		size--;
	}
	return ;
}
