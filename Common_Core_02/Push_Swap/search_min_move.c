/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_min_move.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:27:36 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/27 14:21:47 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	move_nb_to_b(t_push_swap *lst, int count)
{
	int	move_tot;

	move_tot = 0;
	lst->nb_ra = 0;
	lst->nb_rb = 0;
	lst->nb_rra = 0;
	lst->nb_rrb = 0;
	move_tot = move_1(lst, count, move_tot);
	if (lst->b[lst->max_b] < lst->a[count])
		move_tot = move_2(lst, move_tot);
	else if (lst->b[lst->min_b] > lst->a[count])
		move_tot = move_3(lst, move_tot);
	else
		move_tot = move_4(lst, move_tot, count);
	move_tot = move_5(lst, move_tot);
	return (move_tot + 1);
}
