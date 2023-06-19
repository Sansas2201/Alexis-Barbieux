/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:28:51 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/13 13:12:09 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>
# include <errno.h>
# include "Libft/libft.h"
# include "MiniLibx/mlx.h"

# define TRUE 1
# define FALSE 0

# define MAIN_MENU 1
# define GAME 2
# define OPTIONS_STATUS 3
# define GAME_OVER 4

# define UP 126
# define DOWN 125
# define LEFT 123
# define RIGHT 124
# define W 13
# define A 0
# define S 1
# define D 2
# define ENTER 36
# define ESC 53

# define EN 1
# define FR 2

# define PLAY 1
# define OPTIONS 2
# define QUIT 3

# define LANGUAGE 1
# define BACK 2

typedef struct s_checker
{
	char	*tab[54];
	int		height;
	int		item;
	int		chara;
	int		exit;
}	t_checker;

typedef struct s_mlx
{
	void	*mlx;
	void	*mlx_win;

	void	*ground_sprt;
	void	*wall_sprt;
	void	*exit_sprt;
	void	*chara_up_1;
	void	*chara_up_2;
	void	*chara_up_3;
	void	*chara_down_1;
	void	*chara_down_2;
	void	*chara_down_3;
	void	*chara_left_1;
	void	*chara_left_2;
	void	*chara_left_3;
	void	*chara_right_1;
	void	*chara_right_2;
	void	*chara_right_3;
	void	*item_sprt;
	void	*danger_sprt;
	void	*game_over_sprt;
	void	*black_square_sprt;

	void	*book_title;
	void	*book_transition_1;
	void	*book_transition_2;
	void	*book_play_en;
	void	*book_play_fr;
	void	*book_options_en;
	void	*book_options_fr;
	void	*book_quit_en;
	void	*book_quit_fr;
	void	*book_transition_3;
	void	*book_transition_4;
	void	*book_transition_5;
	void	*book_language_en;
	void	*book_language_fr;
	void	*book_back_en;
	void	*book_back_fr;

	int		count;
	int		current_state;
	int		current_language;
	int		current_menu_pos;
	int		current_option;

	int		height;
	int		width;
	char	*map[54];
	int		x;
	int		y;

	int		move_count;
	char	*move_count_char;
	int		up_count;
	int		down_count;
	int		left_count;
	int		right_count;
	int		item_count;
}	t_mlx;

void	animation_down(t_mlx *mlx_lst);
void	animation_left(t_mlx *mlx_lst);
void	animation_right(t_mlx *mlx_lst);
void	animation_up(t_mlx *mlx_lst);

int		check_ber(char *map);
int		check_element_count(int g_chara, int g_item, int g_exit);
int		check_map(char *map, t_checker *check);
int		check_size(t_checker *check);
void	create_map(t_mlx *mlx_lst);
int		create_menu_en(t_mlx *mlx_lst);

int		error_ret(char c);

void	fill_lst(char *map, t_mlx *mlx_lst);

void	gameplay(int keycode, t_mlx *mlx_lst);
void	get_sprite(t_mlx *mlx_lst);

int		main_menu_nav_en(int keycode, t_mlx *mlx_lst);
int		main_menu_nav_fr(int keycode, t_mlx *mlx_lst);
int		my_key_hook(int keycode, t_mlx *mlx_lst);

int		options_nav_en(int keycode, t_mlx *mlx_lst);
int		options_nav_fr(int keycode, t_mlx *mlx_lst);

void	put_exit(t_mlx *mlx_lst);

int		to_en(t_mlx *mlx_lst);
int		to_fr(t_mlx *mlx_lst);
int		to_menu_en(t_mlx *mlx_lst);
int		to_menu_fr(t_mlx *mlx_lst);
int		to_options_en(t_mlx *mlx_lst);
int		to_options_fr(t_mlx *mlx_lst);

void	win(t_mlx *mlx_lst);
int		win_condition(int keycode, t_mlx *mlx_lst);

#endif
