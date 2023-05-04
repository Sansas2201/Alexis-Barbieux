/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:08:22 by abarbieu          #+#    #+#             */
/*   Updated: 2023/05/03 15:07:31 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# define TRUE 1
# define FALSE 0

# ifndef BUFF_SIZE
#  define BUFF_SIZE 42
# endif

char	*get_next_line(int fd);
char	*ft_join(char *reserve, char **line, char *buff);
char	*ft_set_reserve(char **s);
int		ft_strlen(const char *str);

#endif
