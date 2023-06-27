/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:53:17 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/27 14:58:40 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	to_b_5_bis(t_push_swap *lst, int count, int count_b)
{
	if (count_b < lst->count_b / 2)
	{
		while (count < lst->nb_rb - lst->nb_ra)
		{
			ft_rb(lst);
			ft_printf("rb\n");
			count++;
		}
	}
	else
	{
		while (count < lst->nb_rrb - lst->nb_rra)
		{
			ft_rrb(lst);
			ft_printf("rrb\n");
			count++;
		}
	}
}

void	to_b_5(t_push_swap *lst, int count, int count_b)
{
	while (count_b < lst->count_b - 1)
	{
		if (lst->b[count_b] > lst->a[0] && lst->a[0] > lst->b[count_b + 1])
		{
			to_b_5_bis(lst, count, count_b);
			break ;
		}
		count_b++;
	}
}
