/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:01:28 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/13 13:13:55 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	put_game_over(t_mlx *mlx_lst)
{
	mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->game_over_sprt, mlx_lst->x * 32, mlx_lst->y * 32);
	mlx_lst->current_state = GAME_OVER;
	mlx_clear_window(mlx_lst->mlx, mlx_lst->mlx_win);
	if (mlx_lst->current_language == EN)
	{
		mlx_string_put(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->width * 32 / 2 - 50, \
				mlx_lst->height * 32 / 5, 0xFFFFFF, "GAME OVER");
		mlx_string_put(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->width * 32 / 2 - 50, \
				mlx_lst->height * 32 / 5 + 15, 0xFFFFFF, "Try again !");
	}
	else
	{
		mlx_string_put(mlx_lst->mlx, mlx_lst->mlx_win, \
				mlx_lst->width * 32 / 2 - 50, \
				mlx_lst->height * 32 / 5, 0xFFFFFF, "FIN DE PARTIE");
		mlx_string_put(mlx_lst->mlx, \
				mlx_lst->mlx_win, mlx_lst->width * 32 / 2 - 50, \
				mlx_lst->height * 32 / 5 + 15, 0xFFFFFF, "Essaye encore !");
	}
}

static int	wall(int direction, t_mlx *mlx_lst)
{
	int	x;
	int	y;

	x = mlx_lst->x;
	y = mlx_lst->y;
	if (direction == UP && (mlx_lst->map[y - 1][x] == '1' || \
	mlx_lst->map[y - 1][x] == 'E'))
		return (FALSE);
	if (direction == DOWN && (mlx_lst->map[y + 1][x] == '1' || \
	mlx_lst->map[y + 1][x] == 'E'))
		return (FALSE);
	if (direction == LEFT && (mlx_lst->map[y][x - 1] == '1' || \
	mlx_lst->map[y][x - 1] == 'E'))
		return (FALSE);
	if (direction == RIGHT && (mlx_lst->map[y][x + 1] == '1' || \
	mlx_lst->map[y][x + 1] == 'E'))
		return (FALSE);
	return (TRUE);
}

static void	move_player(int direction, t_mlx *mlx_lst)
{
	char	*move_count;

	if (direction == UP)
		animation_up(mlx_lst);
	else if (direction == DOWN)
		animation_down(mlx_lst);
	else if (direction == LEFT)
		animation_left(mlx_lst);
	else if (direction == RIGHT)
		animation_right(mlx_lst);
	mlx_lst->move_count++;
	move_count = ft_itoa(mlx_lst->move_count);
	mlx_put_image_to_window(mlx_lst->mlx, mlx_lst->mlx_win, \
			mlx_lst->black_square_sprt, (mlx_lst->width - 1) * 32, 0);
	mlx_string_put(mlx_lst->mlx, mlx_lst->mlx_win, \
		((mlx_lst->width - 1) * 32) + 5, 18, 0xFFFFFF, \
		move_count);
	free(move_count);
}

void	gameplay(int keycode, t_mlx *mlx_lst)
{
	if (mlx_lst->item_count == 0)
		put_exit(mlx_lst);
	if (win_condition(keycode, mlx_lst) == TRUE && mlx_lst->item_count == 0)
	{
		mlx_lst->current_state = GAME_OVER;
		win(mlx_lst);
		free(mlx_lst->move_count_char);
	}
	if ((keycode == UP || keycode == W) && wall(UP, mlx_lst) == TRUE)
		move_player(UP, mlx_lst);
	else if ((keycode == DOWN || keycode == S) && wall(DOWN, mlx_lst) == TRUE)
		move_player(DOWN, mlx_lst);
	else if ((keycode == LEFT || keycode == A) && wall(LEFT, mlx_lst) == TRUE)
		move_player(LEFT, mlx_lst);
	else if ((keycode == RIGHT || keycode == D) && wall(RIGHT, mlx_lst) == TRUE)
		move_player(RIGHT, mlx_lst);
	if (mlx_lst->map[mlx_lst->y][mlx_lst->x] == 'C')
	{
		mlx_lst->item_count--;
		mlx_lst->map[mlx_lst->y][mlx_lst->x] = '0';
	}
	if (mlx_lst->map[mlx_lst->y][mlx_lst->x] == 'D')
		put_game_over(mlx_lst);
}
