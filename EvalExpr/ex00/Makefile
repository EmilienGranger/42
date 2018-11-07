# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egranger <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/19 17:06:51 by egranger          #+#    #+#              #
#    Updated: 2018/08/20 16:25:44 by egranger         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = main.c \
	  eval_expr.c \
	  ft_calc.c \
	  ft_putchar.c \
	  ft_putnbr.c \
	  ft_strcpy.c \
	  ft_strlen.c

CC = gcc

FLAGS = -Wall -Wextra -Werror

OBJ  = main.o \
	  eval_expr.o \
	  ft_calc.o \
	  ft_putchar.o \
	  ft_putnbr.o \
	  ft_strcpy.o \
	  ft_strlen.o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
