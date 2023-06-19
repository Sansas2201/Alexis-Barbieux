/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 09:38:34 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/07 09:19:37 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	get_sprite_4(t_mlx *mlx_lst)
{
	int	width;
	int	height;

	width = 32;
	height = 32;
	mlx_lst->chara_right_1 = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Chara/Chara_Right_1.xpm", &width, &height);
	mlx_lst->chara_right_2 = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Chara/Chara_Right_2.xpm", &width, &height);
	mlx_lst->chara_right_3 = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Chara/Chara_Right_3.xpm", &width, &height);
	mlx_lst->ground_sprt = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Tile/Ground.xpm", &width, &height);
	mlx_lst->wall_sprt = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Tile/Wall.xpm", &width, &height);
	mlx_lst->exit_sprt = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Tile/Exit.xpm", &width, &height);
	mlx_lst->item_sprt = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Tile/Item.xpm", &width, &height);
	mlx_lst->danger_sprt = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Tile/Water.xpm", &width, &height);
	mlx_lst->game_over_sprt = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Tile/Game_Over.xpm", &width, &height);
	mlx_lst->black_square_sprt = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Tile/Black_Square.xpm", &width, &height);
}

static void	get_sprite_3(t_mlx *mlx_lst)
{
	int	width;
	int	height;

	width = 32;
	height = 32;
	mlx_lst->chara_down_1 = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Chara/Chara_Down_1.xpm", &width, &height);
	mlx_lst->chara_down_2 = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Chara/Chara_Down_2.xpm", &width, &height);
	mlx_lst->chara_down_3 = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Chara/Chara_Down_3.xpm", &width, &height);
	mlx_lst->chara_up_1 = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Chara/Chara_Up_1.xpm", &width, &height);
	mlx_lst->chara_up_2 = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Chara/Chara_Up_2.xpm", &width, &height);
	mlx_lst->chara_up_3 = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Chara/Chara_Up_3.xpm", &width, &height);
	mlx_lst->chara_left_1 = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Chara/Chara_Left_1.xpm", &width, &height);
	mlx_lst->chara_left_2 = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Chara/Chara_Left_2.xpm", &width, &height);
	mlx_lst->chara_left_3 = mlx_xpm_file_to_image(mlx_lst->mlx, \
		"Sprite_Chara/Chara_Left_3.xpm", &width, &height);
	get_sprite_4(mlx_lst);
}

static void	get_sprite_2(t_mlx *mlx_lst)
{
	int	width;
	int	height;

	width = 32;
	height = 32;
	mlx_lst->book_quit_fr = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Book/Book_Quitter.xpm", &width, &height);
	mlx_lst->book_language_en = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Book/Book_En.xpm", &width, &height);
	mlx_lst->book_language_fr = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Book/Book_Fr.xpm", &width, &height);
	mlx_lst->book_back_en = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Book/Book_Back.xpm", &width, &height);
	mlx_lst->book_back_fr = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Book/Book_Retour.xpm", &width, &height);
	mlx_lst->book_transition_3 = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Book/Book_Transition_3.xpm", &width, &height);
	mlx_lst->book_transition_4 = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Book/Book_Transition_4.xpm", &width, &height);
	mlx_lst->book_transition_5 = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Book/Book_Transition_5.xpm", &width, &height);
	get_sprite_3(mlx_lst);
}

void	get_sprite(t_mlx *mlx_lst)
{
	int	width;
	int	height;

	width = 190;
	height = 160;
	mlx_lst->book_title = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Book/Book_Title.xpm", &width, &height);
	mlx_lst->book_transition_1 = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Book/Book_Transition_1.xpm", &width, &height);
	mlx_lst->book_transition_2 = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Book/Book_Transition_2.xpm", &width, &height);
	mlx_lst->book_play_en = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Book/Book_Play.xpm", &width, &height);
	mlx_lst->book_play_fr = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Book/Book_Jouer.xpm", &width, &height);
	mlx_lst->book_options_en = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Book/Book_Options_En.xpm", &width, &height);
	mlx_lst->book_options_fr = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Book/Book_Options_Fr.xpm", &width, &height);
	mlx_lst->book_quit_en = mlx_xpm_file_to_image(mlx_lst->mlx, \
			"Sprite_Book/Book_Quit.xpm", &width, &height);
	get_sprite_2(mlx_lst);
}
