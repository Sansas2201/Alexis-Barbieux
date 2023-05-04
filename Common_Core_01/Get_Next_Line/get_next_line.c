/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:10:27 by abarbieu          #+#    #+#             */
/*   Updated: 2023/05/03 15:23:03 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	check_newline(char *line)
{
	int	i;

	i = 0;
	if (!line)
		return (FALSE);
	while (line[i] && line[i] != '\n')
		i++;
	if (line[i] == '\n')
		return (TRUE);
	return (FALSE);
}

static char	*ft_line(char *reserve)
{
	int		i;
	int		len;
	char	*line;

	if (!reserve)
		return (0);
	i = 0;
	len = 0;
	while (reserve[len] && reserve[len] != '\n')
		len++;
	if (reserve[len])
		len++;
	line = malloc(sizeof(*reserve) * (len + 1));
	if (!line)
		return (0);
	while (i < len)
	{
		line[i] = reserve[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

static char	*ft_free(char *str)
{
	free(str);
	return (0);
}

static char	*ft_reste(char *reserve)
{
	int		i;
	int		j;
	char	*reste;

	i = 0;
	j = 0;
	if (!reserve)
		return (0);
	while (reserve[i] && reserve[i] != '\n')
		i++;
	if (!reserve[i])
		return (ft_free(reserve));
	i++;
	reste = malloc(sizeof(char) * (ft_strlen(reserve + i) + 1));
	if (!reste)
		return (ft_free(reserve));
	while (reserve[i + j])
	{
		reste[j] = reserve[i + j];
		j++;
	}
	reste[j] = '\0';
	free(reserve);
	return (reste);
}

char	*get_next_line(int fd)
{
	int					c_read;
	char				*line;
	static char			*reserve = 0;
	char				buff[BUFF_SIZE + 1];

	while (check_newline(reserve) == FALSE)
	{
		c_read = read(fd, buff, BUFF_SIZE);
		if (c_read == -1)
			return (ft_set_reserve(&reserve));
		if (c_read == 0)
			break ;
		buff[c_read] = '\0';
		reserve = ft_join(reserve, &line, buff);
		if (!reserve)
			return (0);
		free(line);
	}
	line = ft_line(reserve);
	if (!line)
		return (ft_set_reserve(&reserve));
	reserve = ft_reste(reserve);
	if (reserve && reserve[0] == '\0')
		return (ft_set_reserve(&reserve));
	return (line);
}
