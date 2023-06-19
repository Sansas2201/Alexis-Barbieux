/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_fill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:16:03 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/13 13:12:18 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	fill_lst_3(t_mlx *mlx_lst)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	mlx_lst->item_count = 0;
	while (j < mlx_lst->height)
	{
		i = 0;
		while (mlx_lst->map[j][i])
		{
			if (mlx_lst->map[j][i] == 'C')
				mlx_lst->item_count++;
			i++;
		}
		j++;
	}
}

static void	fill_lst_2(t_mlx *mlx_lst)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < mlx_lst->height)
	{
		i = 0;
		while (mlx_lst->map[j][i])
		{
			if (mlx_lst->map[j][i] == 'P')
			{
				mlx_lst->x = i;
				mlx_lst->y = j;
				break ;
			}
			i++;
		}
		if (mlx_lst->map[j][i] == 'P')
			break ;
		j++;
	}
	fill_lst_3(mlx_lst);
}

void	fill_lst(char *map, t_mlx *mlx_lst)
{
	int	i;
	int	fd;

	mlx_lst->count = 0;
	mlx_lst->current_state = MAIN_MENU;
	mlx_lst->current_menu_pos = PLAY;
	mlx_lst->current_language = EN;
	mlx_lst->current_option = LANGUAGE;
	mlx_lst->up_count = 0;
	mlx_lst->down_count = 0;
	mlx_lst->left_count = 0;
	mlx_lst->right_count = 0;
	mlx_lst->move_count = 0;
	i = 0;
	fd = open(map, O_RDONLY);
	mlx_lst->map[i] = get_next_line(fd);
	while (mlx_lst->map[i] != 0)
	{
		i++;
		mlx_lst->map[i] = get_next_line(fd);
	}
	close(fd);
	mlx_lst->height = i;
	mlx_lst->width = ft_strlen(mlx_lst->map[0]) - 1;
	fill_lst_2(mlx_lst);
}
