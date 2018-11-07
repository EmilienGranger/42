# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egranger <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/19 19:03:23 by egranger          #+#    #+#              #
#    Updated: 2018/08/19 19:15:01 by egranger         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = main.c \
	  ft_cmp_colles.c \
	  ft_printer.c \
	  ft_putchar.c \
	  ft_strcpy.c \
	  read_colle.c \
	  ft_strcmp.c \
	  rush00.c \
	  rush01.c \
	  rush02.c \
	  rush03.c \
	  rush04.c

CC = gcc

FLAGS = -Wall -Wextra -Werror

OBJ  = main.o \
	   ft_cmp_colles.o \
	   ft_printer.o \
	   ft_putchar.o \
	   ft_strcpy.o \
	   read_colle.o \
	   ft_strcmp.o \
	   rush00.o \
	   rush01.o \
	   rush02.o \
	   rush03.o \
	   rush04.o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
