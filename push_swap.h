/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:33:35 by hasabir           #+#    #+#             */
/*   Updated: 2022/04/22 07:39:52 by hasabir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
void	isduplicate(t_stack *stack_a, int arg);
int		ft_atoi(char *arg);
int		issorted(t_stack *stack_a);
void	ft_exit(void);
void	push_check(t_stack *stack_a, int size, char *arg[]);
char	*sa(t_stack *stack_a);
char	*pa(t_stack *stack_a, t_stack *stack_b);
char	*pb(t_stack *stack_a, t_stack *stack_b);
char	*ra(t_stack *stack_a);
char	*rb(t_stack *stack_b);
char	*rra(t_stack *stack_a);
char	*rrb(t_stack *stack_b);
void	sort_min_args(t_stack *stack_a, int n);
void	sort_med_args(t_stack *stack_a, t_stack *stack_b, int n);
void	top_min_arg(t_stack *stack_a, int n);
int		seartch_min_arg(t_stack	*stacks);
int		*stackcopy(t_stack *stack_a);
void	ft_swap(int *i, int *j);
void	quicksort(t_stack *stack_a, int start, int end);
void	push_b(t_stack *stack_a, t_stack *stack_b, int size);
void	sort(t_stack *stack_a, t_stack *stack_b);
int		*subnbr(t_stack *stack_a, int start, int size);
int		nbrschr(int i, int *p, int size);
char	*printmvs(char *stock, char *mv);
char	*printmv(char	*stock, char *mv);
char	*ft_strdup(char	*s);
int		ft_strlen(char *str);
int		ft_printrb(int j, t_stack *b, char **stock, int n);
void	ft_strcpy(char *dst, char *src, int dstsize);
#endif