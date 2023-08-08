# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/05 09:28:00 by abarbieu          #+#    #+#              #
#    Updated: 2023/08/08 12:17:55 by abarbieu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strlen.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strnstr.c \
	   ft_atoi.c \
	   ft_calloc.c \
	   ft_strdup.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_split.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   ft_striteri.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   Printf/ft_c.c \
	   Printf/ft_hex.c \
	   Printf/ft_point.c \
	   Printf/ft_printf.c \
	   Printf/ft_put_un_int.c \
	   Printf/ft_putnbr.c \
	   Printf/ft_str.c \
	   GNL/get_next_line_utils.c \
	   GNL/get_next_line.c
	
BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

HEADER = libft.h
		
OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

COMPILE = ar rcs $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

$(NAME):$(OBJS)
	$(COMPILE) $(OBJS)

re: fclean all

.c.o:
	$(CC) $(FLAGS) -c $< -o $@ -I $(HEADER)

bonus: $(OBJS) $(BONUS_OBJS)
	ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)

norm:
	@norminette -R CheckForbiddenSourceHeader $(SRCS) $(HEADER)

.PHONY: all clean fclean re bonus norm

#.SILENT: all clean fclean re bonus
