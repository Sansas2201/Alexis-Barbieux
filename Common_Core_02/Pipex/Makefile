# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 09:47:38 by abarbieu          #+#    #+#              #
#    Updated: 2023/08/03 15:46:36 by abarbieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

SRC = pipex.c \
		pipex_utils.c \
		parsing.c
		
SRC_BONUS = Bonus/pipex_bonus.c \
				Bonus/pipex_utils_bonus.c \
				Bonus/parsing_bonus.c

OBJ = ${SRC:.c=.o}

OBJ_BONUS = ${SRC_BONUS:.c=.o}

HEADER = pipex.h

CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g

CC = gcc

REMOVE = rm -f

DEPENDS = @make -C ./Libft 

COMPILE = gcc $(CFLAGS) -o $(NAME) -I./Libft -L./Libft -lft

# Colors
GREEN= \033[1;32m
RED= \033[1;31m
WHITE= \033[0m

all: $(NAME)

libft:
	$(DEPENDS)

$(NAME):$(OBJ) libft 
		$(COMPILE) $(OBJ)

clean:
	$(REMOVE) $(OBJ) $(OBJ_BONUS)
	make -C ./Libft clean
	echo "$(GREEN)All .o removed$(WHITE)"

fclean: clean
	$(REMOVE) $(NAME)
	make -C ./Libft fclean
	echo "$(GREEN)All .a removed$(WHITE)"

re: fclean all

bonus:libft $(OBJ_BONUS)
	$(COMPILE) $(OBJ_BONUS)

.c.o : $(CC) -c $(CFLAGS) -I./Libft $< -o $@

norm:
	norminette -R CheckForbiddenSourceHeader $(SRC) $(HEADER)
	make -C ./Libft norm

.PHONY: all clean fclean re norm bonus

.SILENT: all clean fclean re libft norm bonus
