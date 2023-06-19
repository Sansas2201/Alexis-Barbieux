/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:00:21 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/12 11:20:07 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	check_path(t_checker *check, int x, int y, int item_init)
{
	static int	item;
	static int	check_exit;

	item = item_init;
	if (check->tab[y][x] == 'C')
		item--;
	if (check->tab[y][x] == 'E')
		check_exit++;
	check->tab[y][x] = '2';
	if (check->tab[y - 1][x] != '1' && check->tab[y - 1][x] != '2' && \
		check->tab[y - 1][x] != 'D')
		check_path(check, x, y - 1, item);
	if (check->tab[y + 1][x] != '1' && check->tab[y + 1][x] != '2' && \
		check->tab[y + 1][x] != 'D')
		check_path(check, x, y + 1, item);
	if (check->tab[y][x - 1] != '1' && check->tab[y][x - 1] != '2' && \
		check->tab[y][x + 1] != 'D')
		check_path(check, x - 1, y, item);
	if (check->tab[y][x + 1] != '1' && check->tab[y][x + 1] != '2' && \
		check->tab[y][x + 1] != 'D')
		check_path(check, x + 1, y, item);
	if (item == 0 && check_exit == 1)
		return (TRUE);
	return (FALSE);
}

static int	check_wall(t_checker *check)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (check->tab[i][j] && check->tab[i][j] == '1')
		j++;
	if (check->tab[i][j] == '\n')
		j--;
	while (i < check->height && check->tab[i][j] == '1')
		i++;
	while (j > 0 && check->tab[i][j] == '1')
		j--;
	while (i > 0 && check->tab[i][j] == '1')
		i--;
	if (check->tab[i][j] == '1')
		return (TRUE);
	return (error_ret('w'));
}

static int	check_element(t_checker *check, char c)
{
	if (c == '0')
		return (TRUE);
	if (c == '1')
		return (TRUE);
	if (c == 'C')
	{
		check->item++;
		return (TRUE);
	}
	if (c == 'E')
	{
		check->exit++;
		return (TRUE);
	}
	if (c == 'P')
	{
		check->chara++;
		return (TRUE);
	}
	if (c == 'D')
		return (TRUE);
	return (error_ret('q'));
}

static int	check_map_bis(t_checker *check)
{
	unsigned long	i;
	unsigned long	j;

	if (check_wall(check) == FALSE)
		return (error_ret('w'));
	i = 1;
	while (((int)i) <= check->height)
	{
		j = 1;
		while (check->tab[i][j] && j <= (ft_strlen(check->tab[i]) - 2))
		{
			if (check_element(check, check->tab[i][j]) == FALSE)
				return (FALSE);
			j++;
		}
		i++;
	}
	if (check_element_count(check->chara, check->item, check->exit) == FALSE)
		return (FALSE);
	return (check_path(check, 1, 1, check->item));
}

int	check_map(char *map, t_checker *check)
{
	int	fd;
	int	i;

	i = 0;
	fd = open(map, O_RDONLY);
	check->tab[i] = get_next_line(fd);
	if (check->tab[i] == 0)
		return (error_ret('v'));
	while (check->tab[i] != 0)
	{
		if (i == 54)
			exit (write(1, "Error : Map too tall !\n", 23));
		i++;
		check->tab[i] = get_next_line(fd);
	}
	close(fd);
	check->height = i - 1;
	if (check_size(check) == FALSE)
		return (FALSE);
	return (check_map_bis(check));
}
