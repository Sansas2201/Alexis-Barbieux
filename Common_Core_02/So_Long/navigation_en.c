/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   navigation_en.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:24:38 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/12 10:50:12 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	menu_change_en(t_mlx *mlx_lst, int status)
{
	if (status == PLAY)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->book_play_en, -60, -50);
		mlx_lst->current_menu_pos = PLAY;
	}
	if (status == OPTIONS)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->book_options_en, -60, -50);
		mlx_lst->current_menu_pos = OPTIONS;
	}
	if (status == QUIT)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->book_quit_en, -60, -50);
		mlx_lst->current_menu_pos = QUIT;
	}
	return (0);
}

int	main_menu_nav_en(int keycode, t_mlx *mlx_lst)
{
	if ((keycode == UP || keycode == W) && mlx_lst->current_menu_pos == OPTIONS)
		menu_change_en(mlx_lst, PLAY);
	else if ((keycode == UP || keycode == W) && \
			mlx_lst->current_menu_pos == QUIT)
		menu_change_en(mlx_lst, OPTIONS);
	else if ((keycode == DOWN || keycode == S) && \
			mlx_lst->current_menu_pos == PLAY)
		menu_change_en(mlx_lst, OPTIONS);
	else if ((keycode == DOWN || keycode == S) && \
			mlx_lst->current_menu_pos == OPTIONS)
		menu_change_en(mlx_lst, QUIT);
	else if (keycode == ENTER && mlx_lst->current_menu_pos == PLAY)
	{
		create_map(mlx_lst);
		mlx_lst->current_state = GAME;
	}
	else if (keycode == ENTER && mlx_lst->current_menu_pos == OPTIONS)
	{
		to_options_en(mlx_lst);
		mlx_lst->current_state = OPTIONS_STATUS;
	}
	else if (keycode == ENTER && mlx_lst->current_menu_pos == QUIT)
		exit(0);
	return (0);
}

static int	change_options_en(t_mlx *mlx_lst, int status)
{
	if (status == LANGUAGE)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->book_language_en, -60, -50);
		mlx_lst->current_option = LANGUAGE;
	}
	if (status == BACK)
	{
		mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->book_back_en, -60, -50);
		mlx_lst->current_option = BACK;
	}
	return (0);
}

int	options_nav_en(int keycode, t_mlx *mlx_lst)
{
	if ((keycode == UP || keycode == W) && mlx_lst->current_option == BACK)
		change_options_en(mlx_lst, LANGUAGE);
	else if ((keycode == DOWN || keycode == S) && \
			mlx_lst->current_option == LANGUAGE)
		change_options_en(mlx_lst, BACK);
	else if ((keycode == RIGHT || keycode == D) && \
			mlx_lst->current_option == LANGUAGE)
		to_fr(mlx_lst);
	else if (keycode == ENTER && mlx_lst->current_option == BACK)
	{
		to_menu_en(mlx_lst);
		mlx_lst->current_state = MAIN_MENU;
		mlx_lst->current_option = LANGUAGE;
	}
	return (0);
}
