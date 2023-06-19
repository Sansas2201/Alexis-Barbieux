/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:15:26 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/12 10:49:39 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include <time.h>

int	to_menu_en(t_mlx *mlx_lst)
{
	mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->book_options_en, -60, -50);
	return (0);
}

int	to_menu_fr(t_mlx *mlx_lst)
{
	mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->book_options_fr, -60, -50);
	return (0);
}

int	create_menu_en(t_mlx *mlx_lst)
{
	if (mlx_lst->count < 50)
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->book_title, -60, -50);
	else if (50 <= mlx_lst->count && mlx_lst->count < 60)
	{
		mlx_clear_window(mlx_lst->mlx, mlx_lst->mlx_win);
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->book_transition_1, -60, -50);
	}
	else if (mlx_lst->count >= 60 && mlx_lst->count <= 70)
	{
		mlx_clear_window(mlx_lst->mlx, mlx_lst->mlx_win);
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->book_transition_2, -60, -50);
	}
	else if (mlx_lst->count == 71)
	{
		mlx_clear_window(mlx_lst->mlx, mlx_lst->mlx_win);
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->book_play_en, -60, -50);
	}
	else
		mlx_hook(mlx_lst->mlx_win, 2, 0, my_key_hook, mlx_lst);
	mlx_lst->count++;
	return (FALSE);
}
