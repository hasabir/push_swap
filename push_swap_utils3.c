/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:41:15 by hp                #+#    #+#             */
/*   Updated: 2022/04/21 17:14:31 by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dst, char *src, int dstsize)
{
	int	i;

	i = 0;
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ;
}

char	*ft_strdup(char	*s)
{
	char	*p;
	int		len;

	len = ft_strlen(s) + 1;
	p = (char *)malloc(len);
	if (!p)
		exit (0);
	ft_strcpy(p, s, len);
	return (p);
}

void	ft_swap(int *i, int *j)
{
	int	swp;

	swp = *i;
	*i = *j;
	*j = swp;
	return ;
}

void	quicksort(t_stack *stack_a, int start, int end)
{
	int	pivot;
	int	i;
	int	j;

	if (start <= end)
	{
		i = start - 1;
		pivot = stack_a->tmp[end];
		j = start;
		while (j < end)
		{
			if (stack_a->tmp[j] < pivot)
			{
				i++;
				ft_swap(&stack_a->tmp[i], &stack_a->tmp[j]);
			}
			j++;
		}
		ft_swap(&stack_a->tmp[i + 1], &stack_a->tmp[end]);
		pivot = i + 1;
		quicksort(stack_a, start, pivot - 1);
		quicksort(stack_a, pivot + 1, end);
	}
	return ;
}
