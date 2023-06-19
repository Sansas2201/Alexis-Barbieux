/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:21:33 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/12 10:50:38 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	to_options_en(t_mlx *mlx_lst)
{
	mlx_clear_window(mlx_lst->mlx, mlx_lst->mlx_win);
	mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->book_language_en, -60, -50);
	return (0);
}

int	to_options_fr(t_mlx *mlx_lst)
{
	mlx_clear_window(mlx_lst->mlx, mlx_lst->mlx_win);
	mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->book_language_fr, -60, -50);
	return (0);
}
