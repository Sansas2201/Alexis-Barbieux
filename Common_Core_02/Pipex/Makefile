# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 09:47:38 by abarbieu          #+#    #+#              #
#    Updated: 2023/08/10 10:19:00 by abarbieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

SRC = pipex.c \
		pipex_utils.c \
		parsing.c \
		pipex_utils_bis.c
		
OBJ = ${SRC:.c=.o}

LIBFT = Libft/libft.a

HEADER = pipex.h

CFLAGS = -Wall -Wextra -Werror #-fsanitize=address -g

CC = gcc

REMOVE = rm -f

DEPENDS = make -C ./Libft 

COMPILE = gcc $(CFLAGS) -o $(NAME) -I./Libft -L./Libft

# Colors
GREEN= \033[1;32m
RED= \033[1;31m
WHITE= \033[0m

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
		$(COMPILE) $(OBJ) $(LIBFT)

$(LIBFT):
	$(DEPENDS)

clean:
	$(REMOVE) $(OBJ) $(OBJ_BONUS)
	make -C ./Libft clean
	@echo "$(GREEN)All .o removed$(WHITE)"

fclean: clean
	@$(REMOVE) $(NAME)
	@$(REMOVE) Libft/libft.a
	@echo "$(GREEN)All .a removed$(WHITE)"

re: fclean all

.c.o : $(CC) -c $(CFLAGS) -I./Libft $< -o $@

norm:
	norminette -R CheckForbiddenSourceHeader $(SRC) $(HEADER)
	make -C ./Libft norm

.PHONY: all clean fclean re norm

#.SILENT: all clean fclean re norm
