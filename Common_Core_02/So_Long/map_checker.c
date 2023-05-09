/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:00:21 by abarbieu          #+#    #+#             */
/*   Updated: 2023/05/09 09:57:48 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	check_path(char **tab, int height)
{

}

static int	check_element(char **tab, int height)
{
	struct t_variable;
	while (tab[i][j] && tab[i][j] == '1')
		j++;
	if (tab[i][j] != '1')
		return (error_ret('s', t_variable));
	while (i < height)
	{
		if (tab[i][1] != '1')
			return (error_ret('s', t_variable));
		while (tab[i][j])
		{
			if (tab[i][j] == 'C')
				t_variable->item++;
			if (tab[i][j] == 'E')
				t_variable->exit++;
			if (tab[i][j] == 'P')
				t.variable->chara++;
			if (t_variable.item == 0 || (t_variable.chara == 0 || \
				t_variable.chara > 1) || (t.variable.exit == 0 || \
				t.variable.exit > 1))
				return (error_ret('n', t_variable));
			j++;
		}
		if (tab[i][ft_strlen(tab[i])] != 1)
			return (error_ret('s', t_variable));
	}
	j = 0;
	while (tab[i][j] && tab[i][j] == '1')
		j++;
	if (tab[i][j] != '1')
		return (error_ret('s', t_variable));
	return (check_path(tab, height));
}

int	check_map(char *map)
{
	char	**tab;
	int		fd;
	int		i;
	int		height;

	i = 0;
	fd = open(map, O_RDONLY);
	while (tab[i] != NULL)
	{
		tab[i] = get_next_line(fd);
		i++;
	}
	height = i - 1;
	i = 0;
	while (i <= height)
	{
		if (ft_strlen(tab[i]) < height || ft_strlen(tab[i]) <= 2 || height <= 2)
		{
			write(1, "Error : Wrong map size", 22);
			return (FALSE);
		}
		i++;
	}
	return (check_element(tab, height));
}

int	check_ber(char *map)
{
	int		i;
	int		j;
	char	*ber;

	i = 0;
	j = 0;
	ber = "ber";
	while (map[i] && map[i] != '.')
		i++;
	if (map[i] == '.')
	{
		i++;
		while (map[i] == ber[j])
		{
			i++;
			j++;
		}
		if (j == 3)
			return (TRUE);
	}
	return (FALSE);
}
