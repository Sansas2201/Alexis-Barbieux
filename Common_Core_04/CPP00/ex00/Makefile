# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 16:28:22 by abarbieu          #+#    #+#              #
#    Updated: 2023/11/06 10:17:48 by abarbieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# The name of the executable
NAME	= megaphone

# Compiler and compiling flags
CC	= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

# Debug, use with`make DEBUG=1`
ifeq ($(DEBUG),1)
CFLAGS	+= -g3 -fsanitize=address
endif

# List of source files (add your *.c files here)
SRC =	megaphone.cpp

# Colors
GR	= \033[32;1m
RE	= \033[31;1m
YE	= \033[33;1m
CY	= \033[36;1m
RC	= \033[0m

# ================================== RULES =================================== #

all : $(NAME)

# Compiling
$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

# Cleaning
clean :
	@printf "$(RE)--- Removing $(NAME)$(RC)\n"
	@rm -rf $(NAME)

fclean : clean
	@printf "$(RE)--- Removing $(NAME)$(RC)\n"
	@rm -f $(NAME)

# Special rule to force to remake everything
re : fclean all

# This specifies the rules that does not correspond to any filename
.PHONY: all clean fclean re