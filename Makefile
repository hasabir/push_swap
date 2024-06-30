# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hasabir <hasabir@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 18:28:58 by hasabir           #+#    #+#              #
#    Updated: 2022/04/21 10:03:01 by hasabir          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = push_swap_moves.c push_swap_moves2.c push_swap_utils.c\
	stack_manipulate.c main.c minsort.c push_swap_utils2.c push_sort.c\
	push_swap_utils3.c

BONUS_FILES = bonus_main.c bonus_push_swap_mvs.c bonus_push_swap_moves2.c\
	bonus_push_swap_utils.c bonus_push_swap_utils2.c bonus_stack_manipulate.c\
	get_next_line.c get_next_line_utils.c bonus_push_swap_moves3.c

BONUS = checker

BONUS_OBJS = ${BONUS_FILES:.c=.o}

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all : ${NAME}

%.o : %.c
	@${CC} -c ${CFLAGS} $< 

${NAME} :${OBJS}
	@$(CC) $(OBJS) -o $(NAME)




bonus : ${BONUS}
	
%.o : %.c
	@${CC} -c ${CFLAGS} $<

 
${BONUS} : ${BONUS_OBJS}
	@${CC} ${BONUS_OBJS} -o ${BONUS}

clean:
	rm -rf ${OBJS}
	rm -rf ${BONUS_OBJS}

fclean: clean
	rm -rf ${NAME}
	rm -rf ${BONUS}

re: fclean all bonus