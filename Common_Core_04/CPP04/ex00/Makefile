# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 14:44:43 by abarbieu          #+#    #+#              #
#    Updated: 2023/11/23 08:41:44 by abarbieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# The name of the executable
NAME	= polymorphism

# Compiler and compiling flags
CC	= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

# Debug, use with`make DEBUG=1`
ifeq ($(DEBUG),1)
CFLAGS	+= -g3 -fsanitize=address
endif

# List of source files
SRC =	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp

# List of header files
INC =	Animal.hpp \
		Dog.hpp \
		Cat.hpp \
		WrongAnimal.hpp \
		WrongCat.hpp

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