/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_push_swap_utils2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 07:37:19 by hasabir           #+#    #+#             */
/*   Updated: 2022/04/21 09:43:46 by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus_push_swap.h"

int	f_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *stock, char *mv)
{
	int	i;

	i = 0;
	while (mv[i])
	i++;
	stock = malloc(i + 1);
	if (!stock)
		exit (0);
	i = -1;
	while (stock[++i] && mv[i])
		stock[i] = mv[i];
	stock[i] = 0;
	return (stock);
}

char	*f_strdup(char *s)
{
	char	*p;
	int		len;

	len = 0;
	while (s[len])
	len++;
	p = (char *)malloc(len + 1);
	if (!p)
		exit (0);
	ft_strcpy(p, s);
	return (p);
}

int	ft_strcmp(char	*tmp, char *mv)
{
	int	i;

	i = 0;
	while (tmp[i] && mv[i] && tmp[i] == mv[i])
		i++;
	return (tmp[i] - mv[i]);
}
