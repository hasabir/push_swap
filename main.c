/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:58:04 by hasabir           #+#    #+#             */
/*   Updated: 2022/04/22 08:34:40 by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	*a;
	t_stack	*b;

	a = 0;
	if (ac == 1 || (ac == 2 && ft_atoi(av[ac - 1])))
		return (0);
	a = create_stack(ac - 1);
	push_check (a, ac, av);
	if (issorted(a) == 0)
		ft_exit();
	b = create_stack(ac - 1);
	if (ac <= 4)
		sort_min_args(a, ac - 1);
	else if (ac == 5 || ac == 6)
		sort_med_args(a, b, ac - 1);
	else
	{
		a->tmp = stackcopy(a);
		quicksort(a, 0, a->top);
		push_b(a, b, a->max_size - 1);
		sort(a, b);
	}
	return (0);
}
