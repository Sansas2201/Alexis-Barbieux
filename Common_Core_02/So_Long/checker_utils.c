/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:03:11 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/12 10:59:00 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	check_size(t_checker *check)
{
	unsigned long	i;

	i = 1;
	while (((int)i) <= check->height)
	{
		if (((int)ft_strlen(check->tab[i])) <= check->height || \
		ft_strlen(check->tab[i]) <= 2 || check->height < 2 || \
		(ft_strlen(check->tab[i]) != ft_strlen(check->tab[i - 1])))
			return (error_ret('s'));
		i++;
	}
	return (TRUE);
}

int	error_ret(char c)
{
	if (c == 'c')
		write(1, "Error : More or less than one character !\n", 42);
	if (c == 'i')
		write(1, "Error : No item on the map !\n", 29);
	if (c == 'e')
		write(1, "Error : More or less than one exit !\n", 37);
	if (c == 'w')
		write(1, "Error : Map not surrounded by walls !\n", 38);
	if (c == 'p')
		write(1, "Error : No valid path !\n", 24);
	if (c == 's')
		write(1, "Error : Wrong map size !\n", 25);
	if (c == 'v')
		write(1, "Error : No map found !\n", 23);
	if (c == 'q')
		write(1, "Error : Invalid element detected !\n", 35);
	exit (FALSE);
}

int	check_ber(char *map)
{
	unsigned long	i;

	i = ft_strlen(map) - 1;
	if (map[i] == 'r')
		i--;
	if (map[i] == 'e')
		i--;
	if (map[i] == 'b' && i == ft_strlen(map) - 3)
		return (TRUE);
	return (FALSE);
}

int	check_element_count(int g_chara, int g_item, int g_exit)
{
	if (g_chara == 0 || g_chara > 1)
		return (error_ret('c'));
	if (g_item == 0)
		return (error_ret('i'));
	if (g_exit == 0 || g_exit > 1)
		return (error_ret('e'));
	return (TRUE);
}
