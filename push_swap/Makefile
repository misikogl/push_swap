# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: misikogl <42istanbul.com.tr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 21:59:51 by misikogl          #+#    #+#              #
#    Updated: 2022/11/22 14:01:47 by misikogl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

CC		= gcc 

CFLAGS	= -Wall -Wextra -Werror -fsanitize=address -g

SRCS	= ./srcs/controls.c \
	  ./srcs/push_swap.c \
	  ./srcs/push.c \
	  ./srcs/rereverse.c \
	  ./srcs/reverse.c \
	  ./srcs/swap.c \
	  ./srcs/push_swap_arg.c \
	  ./srcs/push_swap_free.c \
	  ./srcs/sort_algorithm.c \
	  ./srcs/radix_sort.c 

OBJS	= $(SRCS:%.c=%.o)

$(NAME):$(OBJS)

		make -C ./libs/libft
		mv ./libs/libft/libft.a ./libft.a

		make -C ./libs/ft_printf
		mv ./libs/ft_printf/libftprintf.a ./libftprintf.a
		$(CC) $(CFLAGS) $(OBJS) libft.a libftprintf.a -o $(NAME)
all: 	$(NAME)

clean:

		make -C ./libs/libft fclean
		rm -rf */*.o libft.a

		make -C ./libs/ft_printf fclean
		rm -rf */*.o libftprintf.a
		
fclean: clean
		rm -rf push_swap

re: 	fclean all

.PHONY: all clean fclean re
