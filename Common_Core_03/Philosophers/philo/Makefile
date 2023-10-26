# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 09:47:38 by abarbieu          #+#    #+#              #
#    Updated: 2023/10/26 12:14:34 by abarbieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

SRC = philo.c \
		philo_utils.c \
		state.c \
		init.c \
		thread.c \
		loop.c

OBJ = ${SRC:.c=.o}

OBJ_BONUS = ${SRC_BONUS:.c=.o}

HEADER = philo.h

CFLAGS = -Wall -Wextra -Werror #-fsanitize=thread -g

CC = gcc

REMOVE = rm -f

COMPILE = gcc $(CFLAGS) -o $(NAME)

# Colors
GREEN= \033[1;32m
RED= \033[1;31m
WHITE= \033[0m

all: $(NAME)

libft:
	$(DEPENDS)

$(NAME):$(OBJ)
		$(COMPILE) $(OBJ)

clean:
	$(REMOVE) $(OBJ) $(OBJ_BONUS)
	echo "$(GREEN)All .o removed$(WHITE)"

fclean: clean
	$(REMOVE) $(NAME)
	echo "$(GREEN)All .a removed$(WHITE)"

re: fclean all

bonus:$(OBJ_BONUS)
	$(COMPILE) $(OBJ_BONUS)

.c.o :
	$(CC) -c $(CFLAGS) -I./Libft $< -o $@

norm:
	norminette -R CheckForbiddenSourceHeader $(SRC) $(HEADER)

.PHONY: all clean fclean re norm bonus

.SILENT: all clean fclean re norm bonus
