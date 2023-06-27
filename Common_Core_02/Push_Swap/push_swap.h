/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:45:06 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/27 14:58:45 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "Libft/libft.h"

# define TRUE 1
# define FALSE 0

typedef struct s_push_swap
{
	int		*a;
	int		*b;

	int		count_a;
	int		count_b;

	int		max_a;
	int		max_b;
	int		min_a;
	int		min_b;

	int		nb_ra;
	int		nb_rra;
	int		nb_rb;
	int		nb_rrb;

	char	**tmp;
	int		count;
}	t_push_swap;

void	case_3(t_push_swap *lst);
int		check_case(t_push_swap *lst);
int		check_doublon(t_push_swap *lst);
int		check_more_arg(int argc, char **argv);
int		check_one_arg(char **argv);
int		check_sort(t_push_swap *lst);

void	fill_tab_1(char **argv, t_push_swap *lst);
void	fill_tab_2(int argc, char **argv, t_push_swap *lst);

void	ft_algo(t_push_swap *lst);
void	ft_pa(t_push_swap *lst);
void	ft_pb(t_push_swap *lst);

void	ft_ra(t_push_swap *lst);
void	ft_rb(t_push_swap *lst);
void	ft_rr(t_push_swap *lst);
void	ft_rra(t_push_swap *lst);
void	ft_rrb(t_push_swap *lst);
void	ft_rrr(t_push_swap *lst);
void	ft_sa(t_push_swap *lst);
void	ft_sb(t_push_swap *lst);
void	ft_ss(t_push_swap *lst);

int		move_1(t_push_swap *lst, int count, int move_tot);
int		move_2(t_push_swap *lst, int move_tot);
int		move_3(t_push_swap *lst, int move_tot);
int		move_4(t_push_swap *lst, int move_tot, int count);
int		move_5(t_push_swap *lst, int move_tot);
void	move_to_b(t_push_swap *lst, int min_move);
int		move_nb_to_b(t_push_swap *lst, int count);

int		search_max_a(t_push_swap *lst);
int		search_max_b(t_push_swap *lst);
int		search_min_a(t_push_swap *lst);
int		search_min_b(t_push_swap *lst);
void	sort_3(t_push_swap *lst);

void	to_a_1(t_push_swap *lst, int count);
void	to_a_2(t_push_swap *lst, int count);
void	to_a_3(t_push_swap *lst, int count, int count_a);
void	to_a_4(t_push_swap *lst);
void	to_b_5(t_push_swap *lst, int count, int count_b);

#endif