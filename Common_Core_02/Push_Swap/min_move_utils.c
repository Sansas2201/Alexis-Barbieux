/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_move_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:18:12 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/27 14:21:20 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	move_1(t_push_swap *lst, int count, int move_tot)
{
	if (count <= lst->count_a / 2)
	{
		move_tot = count;
		lst->nb_ra = count;
	}
	else
	{
		move_tot = lst->count_a - count;
		lst->nb_rra = lst->count_a - count;
	}
	return (move_tot);
}

int	move_2(t_push_swap *lst, int move_tot)
{
	if (lst->max_b <= lst->count_b / 2)
	{
		move_tot += lst->max_b;
		lst->nb_rb = lst->max_b;
	}
	else
	{
		move_tot += lst->count_b - lst->max_b;
		lst->nb_rrb = lst->count_b - lst->max_b;
	}
	return (move_tot);
}

int	move_3(t_push_swap *lst, int move_tot)
{
	if (lst->min_b < lst->count_b / 2)
	{
		move_tot += lst->min_b + 1;
		lst->nb_rb = lst->min_b + 1;
	}
	else
	{
		move_tot += lst->count_b - lst->min_b - 1;
		lst->nb_rrb = lst->count_b - lst->min_b - 1;
	}
	return (move_tot);
}

int	move_4(t_push_swap *lst, int move_tot, int count)
{
	int	incr;

	incr = 0;
	while (incr < lst->count_b - 1)
	{
		if (lst->b[incr] > lst->a[count] && lst->a[count] > lst->b[incr + 1])
		{
			if (incr < lst->count_b / 2)
			{
				move_tot += incr + 1;
				lst->nb_rb = incr + 1;
			}
			else
			{
				move_tot += lst->count_b - incr - 1;
				lst->nb_rrb = lst->count_b - incr - 1;
			}
			break ;
		}
		incr++;
	}
	return (move_tot);
}

int	move_5(t_push_swap *lst, int move_tot)
{
	if (lst->nb_ra > 0 && lst->nb_rb > 0)
	{
		if (lst->nb_ra > lst->nb_rb)
			move_tot -= lst->nb_rb;
		if (lst->nb_ra < lst->nb_rb)
			move_tot -= lst->nb_ra;
		if (lst->nb_ra == lst->nb_rb)
			move_tot -= lst->nb_ra;
	}
	else if (lst->nb_rra > 0 && lst->nb_rrb > 0)
	{
		if (lst->nb_rra > lst->nb_rrb)
			move_tot -= lst->nb_rrb;
		if (lst->nb_rra < lst->nb_rrb)
			move_tot -= lst->nb_rra;
		if (lst->nb_rra == lst->nb_rrb)
			move_tot -= lst->nb_rra;
	}
	return (move_tot);
}
