/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:26:31 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/12 12:18:25 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	my_key_hook(int keycode, t_mlx *mlx_lst)
{
	if (mlx_lst->current_state == MAIN_MENU && mlx_lst->current_language == EN)
		main_menu_nav_en(keycode, mlx_lst);
	else if (mlx_lst->current_state == OPTIONS_STATUS && \
		mlx_lst->current_language == EN)
		options_nav_en(keycode, mlx_lst);
	else if (mlx_lst->current_state == MAIN_MENU && \
	mlx_lst->current_language == FR)
		main_menu_nav_fr(keycode, mlx_lst);
	else if (mlx_lst->current_state == OPTIONS_STATUS && \
		mlx_lst->current_language == FR)
		options_nav_fr(keycode, mlx_lst);
	else if (mlx_lst->current_state == GAME)
		gameplay(keycode, mlx_lst);
	if (keycode == ESC)
		exit(0);
	return (0);
}
