/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:20:37 by abarbieu          #+#    #+#             */
/*   Updated: 2023/05/03 15:27:44 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_set_reserve(char **s)
{
	free(*s);
	*s = NULL;
	return (NULL);
}

static char	*ft_strjoin(char *reserve, char *buff)
{
	int		i;
	int		j;
	int		lentot;
	char	*result;

	i = 0;
	j = 0;
	lentot = ft_strlen(reserve) + ft_strlen(buff);
	result = malloc(sizeof(char) * (lentot + 1));
	if (!result)
	{
		free(reserve);
		return (0);
	}
	while (i < ft_strlen(reserve))
	{
		result[i] = reserve[i];
		i++;
	}
	while (j++ < ft_strlen(buff))
	{
		result[i + j] = buff[j];
	}
	result[i + j] = '\0';
	return (result);
}

char	*ft_join(char *reserve, char **line, char *buff)
{
	*line = reserve;
	reserve = ft_strjoin(*line, buff);
	return (0);
}
