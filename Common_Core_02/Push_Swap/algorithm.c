/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:31:00 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/27 13:37:01 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	to_a(t_push_swap *lst)
{
	int	count;
	int	count_a;

	while (lst->count_b != 0)
	{
		count = 0;
		count_a = 0;
		search_max_a(lst);
		search_max_b(lst);
		search_min_a(lst);
		search_min_b(lst);
		if (lst->a[lst->max_a] < lst->b[0])
			to_a_1(lst, count);
		else if (lst->a[lst->min_a] > lst->b[0])
			to_a_2(lst, count);
		else
			to_a_3(lst, count, count_a);
		ft_pa(lst);
	}
	search_min_a(lst);
	if (lst->min_a != 0)
		to_a_4(lst);
}

static void	to_b(t_push_swap *lst)
{
	int	count;
	int	min_move;
	int	move;

	while (lst->count_a > 3)
	{
		search_max_a(lst);
		search_max_b(lst);
		search_min_a(lst);
		search_min_b(lst);
		count = 0;
		min_move = 0;
		while (count < lst->count_a)
		{
			if (move_nb_to_b(lst, count) < move_nb_to_b(lst, min_move))
				min_move = count;
			count++;
		}
		move = move_nb_to_b(lst, min_move);
		move_to_b(lst, min_move);
	}
}

void	ft_algo(t_push_swap *lst)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	lst->nb_ra = 0;
	lst->nb_rra = 0;
	lst->nb_rb = 0;
	lst->nb_rrb = 0;
	ft_pb(lst);
	ft_pb(lst);
	to_b(lst);
	case_3(lst);
	to_a(lst);
}
