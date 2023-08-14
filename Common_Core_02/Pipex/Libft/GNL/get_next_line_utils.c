/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:20:37 by abarbieu          #+#    #+#             */
/*   Updated: 2023/08/14 15:00:23 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_set_stack(char **s)
{
	free(*s);
	*s = NULL;
	return (NULL);
}

static char	*ft_strjoin(char *stack, char *buff)
{
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;
	char	*result;

	i = -1;
	j = -1;
	len1 = ft_strlen_gnl(stack);
	len2 = ft_strlen_gnl(buff);
	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!result)
	{
		free(stack);
		return (0);
	}
	while (++i < len1)
		result[i] = stack[i];
	while (++j < len2)
		result[i + j] = buff[j];
	result[i + j] = '\0';
	return (result);
}

char	*ft_join(char *stack, char **line, char *buff)
{
	*line = stack;
	stack = ft_strjoin(*line, buff);
	return (stack);
}
