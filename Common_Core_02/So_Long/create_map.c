/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:04:04 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/13 13:15:08 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx.h"

static void	put_sprite_2(int j, int i, t_mlx *mlx_lst)
{
	if (mlx_lst->map[j][i] == 'C')
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->ground_sprt, i * 32, j * 32);
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->item_sprt, i * 32, j * 32);
	}
	if (mlx_lst->map[j][i] == 'D')
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->danger_sprt, i * 32, j * 32);
	}
}

static void	put_sprite(int j, int i, t_mlx *mlx_lst)
{
	if (mlx_lst->map[j][i] == '0')
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->ground_sprt, i * 32, j * 32);
	if (mlx_lst->map[j][i] == '1')
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->wall_sprt, i * 32, j * 32);
	if (mlx_lst->map[j][i] == 'E')
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->danger_sprt, i * 32, j * 32);
	}
	if (mlx_lst->map[j][i] == 'P')
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->ground_sprt, i * 32, j * 32);
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->chara_down_1, i * 32, j * 32);
	}
	put_sprite_2(j, i, mlx_lst);
}

void	create_map(t_mlx *mlx_lst)
{
	int	i;
	int	j;

	j = 0;
	while (j < mlx_lst->height)
	{
		i = 0;
		while (mlx_lst->map[j][i])
		{
			put_sprite(j, i, mlx_lst);
			i++;
		}
		j++;
	}
}
