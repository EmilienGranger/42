# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egranger <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/20 13:20:37 by egranger          #+#    #+#              #
#    Updated: 2018/08/21 14:47:45 by egranger         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = do_op.c \
	  ft_div.c \
	  ft_mul.c \
	  ft_atoi.c \
	  ft_putchar.c \
	  ft_putnbr.c \
	  ft_sub.c \
	  ft_mod.c \
	  ft_add.c \

CC = gcc

FLAGS = -Wall -Wextra -Werror

O_FILES = do_op.o \
		  ft_div.o \
		  ft_mul.o \
		  ft_atoi.o \
		  ft_putchar.o \
		  ft_putnbr.o \
		  ft_sub.o \
		  ft_mod.o \
		  ft_add.o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(O_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
