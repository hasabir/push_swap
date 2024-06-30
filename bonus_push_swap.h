/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_push_swap.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 06:24:11 by hasabir           #+#    #+#             */
/*   Updated: 2022/04/22 08:10:13 by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_PUSH_SWAP_H
# define BONUS_PUSH_SWAP_H

# include "get_next_line.h"
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

struct s_stack
{
	int	top;
	int	max_size;
	int	*stack;
	int	*tmp;
};

typedef struct s_stack	t_stack;
t_stack	*create_stack(int size);
void	push(int arg, t_stack *stack_ab);
int		pop(t_stack *stack_ab);
void	ft_exit(void);
int		issorted(t_stack *stack_a);
void	push_check(t_stack *stack_a, int size, char *arg[]);
void	isduplicate(t_stack *stack_a, int arg);
int		ft_atoi(char *arg);
char	*f_strdup(char *s);
int		f_strlen(char *str);
int		ft_strcmp(char *tmp, char *mv);
char	*sa(t_stack *stack_a);
char	*pa(t_stack *stack_a, t_stack *stack_b);
char	*pb(t_stack *stack_a, t_stack *stack_b);
char	*ra(t_stack *stack_a);
char	*rb(t_stack *stack_b);
char	*rra(t_stack *stack_a);
char	*rrb(t_stack *stack_b);
char	*rr(t_stack *stack_a, t_stack *stack_b);
char	*rrr(t_stack *stack_a, t_stack *stack_b);
char	*sb(t_stack *stack_b);
char	*ss(t_stack *stack_a, t_stack *stack_b);
#endif