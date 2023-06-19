/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   language.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:49:50 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/01 17:04:22 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	to_fr(t_mlx *mlx_lst)
{
	mlx_lst->current_language = FR;
	mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->book_language_fr, -60, -50);
	return (0);
}

int	to_en(t_mlx *mlx_lst)
{
	mlx_lst->current_language = EN;
	mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->book_language_en, -60, -50);
	return (0);
}
