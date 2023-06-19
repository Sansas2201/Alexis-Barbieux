# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 09:47:38 by abarbieu          #+#    #+#              #
#    Updated: 2023/06/12 12:19:36 by abarbieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC = so_long.c \
		map_checker.c \
		checker_utils.c \
		create_map.c \
		menu.c \
		key_hook.c \
		language.c \
		navigation_en.c \
		navigation_fr.c \
		lst_fill.c \
		options.c \
		gameplay.c \
		animation.c \
		end_gameplay.c \
		sprite.c

OBJ = ${SRC:.c=.o}

HEADER = so_long.h

CFLAGS = -Wall -Wextra -Werror #-fsanitize=address -g

CC = gcc

REMOVE = rm -f

DEPENDS = @make -C ./Libft 

MLX = @make -C ./MiniLibx

COMPILE = gcc $(CFLAGS) -o $(NAME) -I./Libft -I./MiniLibx -L./Libft -lft -L./MiniLibx -lmlx -framework OpenGL -framework AppKit

# Colors
GREEN= \033[1;32m
RED= \033[1;31m

all: $(NAME)

libft:
	$(DEPENDS)
	$(MLX)

$(NAME):libft $(OBJ)
		$(COMPILE) $(OBJ)

clean:
	$(REMOVE) $(OBJ)
	make -C ./Libft clean
	make -C ./MiniLibx clean
	echo "$(GREEN)All .o removed"

fclean: clean
	$(REMOVE) $(NAME)
	make -C ./Libft fclean
	echo "$(GREEN)All .a removed"

re: fclean all

.c.o : $(CC) -c $(CFLAGS) -I./Libft -I./MiniLibx $< -o $@

norm:
	norminette -R CheckForbiddenSourceHeader $(SRC) $(HEADER)
	make -C ./Libft norm

.PHONY: all clean fclean re libft norm

.SILENT: all clean fclean re libft norm
