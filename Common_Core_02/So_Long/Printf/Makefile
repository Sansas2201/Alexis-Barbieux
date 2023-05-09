# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 11:43:27 by abarbieu          #+#    #+#              #
#    Updated: 2023/04/25 12:59:33 by abarbieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_c.c \
	   ft_hex.c \
	   ft_point.c \
	   ft_printf.c \
	   ft_put_un_int.c \
	   ft_putnbr.c \
	   ft_str.c

HEADER = ft_printf.h

OBJ= ${SRCS:.c=.o} 

FLAGS = -Werror -Wall -Wextra

all : $(NAME)

$(NAME):$(OBJ).
	ar -rcs $(NAME) $(OBJ)

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.c.o : cc $(FLAGS) -c $< -o $@ -I $(HEADER)

