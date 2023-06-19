/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_gameplay.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:34:03 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/13 13:14:10 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	win(t_mlx *mlx_lst)
{
	mlx_clear_window(mlx_lst->mlx, mlx_lst->mlx_win);
	if (mlx_lst->current_language == EN)
	{
		mlx_string_put(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->width * 32 / 2 - 25, \
				mlx_lst->height * 32 / 5, 0xFFFFFF, "YOU WON !");
		mlx_string_put(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->width * 32 / 2 - 75, \
				mlx_lst->height * 32 / 5 + 15, \
				0xFFFFFF, "Try to do better than ");
		mlx_string_put(mlx_lst->mlx, mlx_lst->mlx_win, mlx_lst->width * 32 / 2 \
				+ 80, mlx_lst->height * 32 / 5 + 15, 0xFFFFFF, \
				mlx_lst->move_count_char);
	}
	if (mlx_lst->current_language == FR)
	{
		mlx_string_put(mlx_lst->mlx, mlx_lst->mlx_win, mlx_lst->width * 32 / 2 \
			- 25, mlx_lst->height * 32 / 5, 0xFFFFFF, "TU AS GAGNÉ !");
		mlx_string_put(mlx_lst->mlx, mlx_lst->mlx_win, mlx_lst->width * 32 / 2 \
			- 75, mlx_lst->height * 32 / 5 + 15, 0xFFFFFF, \
			"Essaye de faire mieux que ");
		mlx_string_put(mlx_lst->mlx, mlx_lst->mlx_win, mlx_lst->width * 32 / 2 \
			+ 105, mlx_lst->height * 32 / 5 + 15, \
			0xFFFFFF, mlx_lst->move_count_char);
	}
}

int	win_condition(int keycode, t_mlx *mlx_lst)
{
	if ((keycode == UP || keycode == W) \
		&& mlx_lst->map[mlx_lst->y - 1][mlx_lst->x] != 'E')
		return (FALSE);
	if ((keycode == DOWN || keycode == S) \
		&& mlx_lst->map[mlx_lst->y + 1][mlx_lst->x] != 'E')
		return (FALSE);
	if ((keycode == LEFT || keycode == A) \
		&& mlx_lst->map[mlx_lst->y][mlx_lst->x - 1] != 'E')
		return (FALSE);
	if ((keycode == RIGHT || keycode == D) \
		&& mlx_lst->map[mlx_lst->y][mlx_lst->x + 1] != 'E')
		return (FALSE);
	mlx_lst->move_count_char = ft_itoa(mlx_lst->move_count);
	return (TRUE);
}

void	put_exit(t_mlx *mlx_lst)
{
	int	x;
	int	y;

	y = 0;
	while (y < mlx_lst->height)
	{
		x = 0;
		while (mlx_lst->map[y][x])
		{
			if (mlx_lst->map[y][x] == 'E')
				mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
						mlx_lst->exit_sprt, x * 32, y * 32);
			x++;
		}
		y++;
	}
}
