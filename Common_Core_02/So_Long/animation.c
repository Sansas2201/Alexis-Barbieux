/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:31:41 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/06 11:22:34 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	animation_up(t_mlx *mlx_lst)
{
	mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
		mlx_lst->ground_sprt, mlx_lst->x * 32, mlx_lst->y * 32);
	if (mlx_lst->up_count == 0)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->chara_up_2, mlx_lst->x * 32, (mlx_lst->y - 1) * 32);
		mlx_lst->up_count = 1;
	}
	else if (mlx_lst->up_count == 1)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->chara_up_1, mlx_lst->x * 32, (mlx_lst->y - 1) * 32);
		mlx_lst->up_count = 2;
	}
	else if (mlx_lst->up_count == 2)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->chara_up_3, mlx_lst->x * 32, (mlx_lst->y - 1) * 32);
		mlx_lst->up_count = 0;
	}
	mlx_lst->y--;
}

void	animation_down(t_mlx *mlx_lst)
{
	mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
		mlx_lst->ground_sprt, mlx_lst->x * 32, mlx_lst->y * 32);
	if (mlx_lst->down_count == 0)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->chara_down_2, mlx_lst->x * 32, (mlx_lst->y + 1) * 32);
		mlx_lst->down_count = 1;
	}
	else if (mlx_lst->down_count == 1)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->chara_down_1, mlx_lst->x * 32, (mlx_lst->y + 1) * 32);
		mlx_lst->down_count = 2;
	}
	else if (mlx_lst->down_count == 2)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->chara_down_3, mlx_lst->x * 32, (mlx_lst->y + 1) * 32);
		mlx_lst->down_count = 0;
	}
	mlx_lst->y++;
}

void	animation_left(t_mlx *mlx_lst)
{
	mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
		mlx_lst->ground_sprt, mlx_lst->x * 32, mlx_lst->y * 32);
	if (mlx_lst->left_count == 0)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->chara_left_2, (mlx_lst->x - 1) * 32, mlx_lst->y * 32);
		mlx_lst->left_count = 1;
	}
	else if (mlx_lst->left_count == 1)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->chara_left_1, (mlx_lst->x - 1) * 32, mlx_lst->y * 32);
		mlx_lst->left_count = 2;
	}
	else if (mlx_lst->left_count == 2)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->chara_left_3, (mlx_lst->x - 1) * 32, mlx_lst->y * 32);
		mlx_lst->left_count = 0;
	}
	mlx_lst->x--;
}

void	animation_right(t_mlx *mlx_lst)
{
	mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
		mlx_lst->ground_sprt, mlx_lst->x * 32, mlx_lst->y * 32);
	if (mlx_lst->right_count == 0)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->chara_right_2, (mlx_lst->x + 1) * 32, mlx_lst->y * 32);
		mlx_lst->right_count = 1;
	}
	else if (mlx_lst->right_count == 1)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->chara_right_1, (mlx_lst->x + 1) * 32, mlx_lst->y * 32);
		mlx_lst->right_count = 2;
	}
	else if (mlx_lst->right_count == 2)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->chara_right_3, (mlx_lst->x + 1) * 32, mlx_lst->y * 32);
		mlx_lst->right_count = 0;
	}
	mlx_lst->x++;
}
