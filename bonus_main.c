/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 06:19:33 by hasabir           #+#    #+#             */
/*   Updated: 2022/04/22 08:35:54 by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_push_swap.h"

void	whichmv(char *tmp, t_stack *stack_a, t_stack *stack_b)
{
	if (ft_strcmp(tmp, "pa") == 0)
		pa(stack_a, stack_b);
	else if (ft_strcmp(tmp, "pb") == 0)
		pb(stack_a, stack_b);
	else if (ft_strcmp(tmp, "ra") == 0)
		ra(stack_a);
	else if (ft_strcmp(tmp, "rb") == 0)
		rb(stack_b);
	else if (ft_strcmp(tmp, "rra") == 0)
		rra(stack_a);
	else if (ft_strcmp(tmp, "rrb") == 0)
		rrb(stack_b);
	else if (ft_strcmp(tmp, "sa") == 0)
		sa(stack_a);
	else if (ft_strcmp(tmp, "rrr") == 0)
		rrr(stack_a, stack_b);
	else if (ft_strcmp(tmp, "rr") == 0)
		rr(stack_a, stack_b);
	else if (ft_strcmp(tmp, "ss") == 0)
		ss(stack_a, stack_b);
	else if (ft_strcmp(tmp, "sb") == 0)
		sb(stack_a);
	else
		ft_exit ();
	return ;
}

int	main(int ac, char *av[])
{
	t_stack	*a;
	t_stack	*b;
	char	*tmp;

	a = 0;
	if (ac == 1 || (ac == 2 && ft_atoi(av[ac - 1])))
		return (0);
	a = create_stack(ac - 1);
	push_check(a, ac, av);
	b = create_stack(ac - 1);
	tmp = get_next_line(0);
	while (tmp)
	{
		whichmv(tmp, a, b);
		free (tmp);
		tmp = get_next_line(0);
	}
	free (tmp);
	if (issorted(a) == 0 && a->top == a->max_size - 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}
