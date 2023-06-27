/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:03:53 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/27 14:59:07 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	to_b_1(t_push_swap *lst, int count, int min_move)
{
	while (count < lst->nb_ra && count < lst->nb_rb)
	{
		ft_rr(lst);
		count++;
	}
	while (count < min_move)
	{
		ft_ra(lst);
		ft_printf("ra\n");
		count++;
	}
}

static void	to_b_2(t_push_swap *lst, int count, int min_move)
{
	while (count < lst->nb_rra && count < lst->nb_rrb)
	{
		ft_rrr(lst);
		count++;
	}
	while (count < lst->count_a - min_move)
	{
		ft_rra(lst);
		ft_printf("rra\n");
		count++;
	}
}

static void	to_b_3(t_push_swap *lst, int count_b)
{
	if (lst->max_b <= lst->count_b / 2)
	{
		while (count_b < lst->nb_rb - lst->nb_ra)
		{
			ft_rb(lst);
			ft_printf("rb\n");
			count_b++;
		}
	}
	else
	{
		while (count_b < lst->nb_rrb - lst->nb_rra)
		{
			ft_rrb(lst);
			ft_printf("rrb\n");
			count_b++;
		}
	}
}

static void	to_b_4(t_push_swap *lst, int count_b)
{
	if (lst->min_b < lst->count_b / 2)
	{
		while (count_b < lst->nb_rb - lst->nb_ra)
		{
			ft_rb(lst);
			ft_printf("rb\n");
			count_b++;
		}
	}
	else
	{
		while (count_b < lst->nb_rrb - lst->nb_rra)
		{
			ft_rrb(lst);
			ft_printf("rrb\n");
			count_b++;
		}
	}
}

void	move_to_b(t_push_swap *lst, int min_move)
{
	int	count;
	int	count_b;

	count = 0;
	count_b = 0;
	if (min_move <= lst->count_a / 2)
		to_b_1(lst, count, min_move);
	else
		to_b_2(lst, count, min_move);
	search_max_a(lst);
	search_max_b(lst);
	search_min_a(lst);
	search_min_b(lst);
	if (lst->b[lst->max_b] < lst->a[0])
		to_b_3(lst, count_b);
	else if (lst->b[lst->min_b] > lst->a[0])
		to_b_4(lst, count_b);
	else
	{
		count = 0;
		to_b_5(lst, count, count_b);
	}
	ft_pb(lst);
}
