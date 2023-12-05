# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 09:25:17 by abarbieu          #+#    #+#              #
#    Updated: 2023/11/14 09:27:10 by abarbieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# The name of the executable
NAME	= hi_this_is_brain

# Compiler and compiling flags
CC	= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

# Debug, use with`make DEBUG=1`
ifeq ($(DEBUG),1)
CFLAGS	+= -g3 -fsanitize=address
endif

# List of source files
SRC =	main.cpp

# # List of header files
# INC =

# List of object files
OBJ = ${SRC:.c=.o}

# Colors
GR	= \033[32;1m
RE	= \033[31;1m
YE	= \033[33;1m
CY	= \033[36;1m
RC	= \033[0m

# ================================== RULES =================================== #

all : $(NAME)

# Compiling
$(NAME): $(OBJ) $(INC)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Cleaning
clean :
	@printf "$(RE)--- Removing $(OBJ)$(RC)\n"
	@rm -rf $(NAME)

fclean : clean
	@printf "$(RE)--- Removing $(NAME)$(RC)\n"
	@rm -f $(NAME)

# Special rule to force to remake everything
re : fclean all

.c.o :
	$(CC) -c $(CFLAGS) -I./Libft $< -o $@

# This specifies the rules that does not correspond to any filename
.PHONY: all clean fclean re