/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:44:06 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/13 13:13:38 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	exit_game(t_mlx *mlx_lst)
{
	(void)mlx_lst;
	exit(0);
}

int	main(int argc, char **argv)
{
	t_mlx		mlx_lst;
	t_checker	check;

	check.chara = 0;
	check.exit = 0;
	check.item = 0;
	if (argc != 2)
		return (write(1, "Error : Wrong argument count !\n", 31));
	if (check_ber(argv[1]) == FALSE)
		return (write(1, "Error : Wrong map filename !\n", 29));
	if (check_map(argv[1], &check) == FALSE)
		exit(error_ret('p'));
	ft_printf("Map valid !\n Initializing game...\n");
	fill_lst(argv[1], &mlx_lst);
	mlx_lst.mlx = mlx_init();
	if (!mlx_lst.mlx)
		exit(0);
	mlx_lst.mlx_win = mlx_new_window(mlx_lst.mlx, mlx_lst.width * 32, \
		mlx_lst.height * 32, "So Long");
	if (!mlx_lst.mlx_win)
		exit (0);
	get_sprite(&mlx_lst);
	mlx_loop_hook(mlx_lst.mlx, create_menu_en, &mlx_lst);
	mlx_hook(mlx_lst.mlx_win, 17, 0, exit_game, &mlx_lst);
	mlx_loop(mlx_lst.mlx);
}
