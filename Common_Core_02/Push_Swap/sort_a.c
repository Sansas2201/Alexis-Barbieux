/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:25:40 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/27 14:31:50 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	to_a_1(t_push_swap *lst, int count)
{
	if (lst->max_a <= lst->count_a / 2)
	{
		while (count < lst->max_a + 1)
		{
			ft_ra(lst);
			ft_printf("ra\n");
			count++;
		}
	}
	else
	{
		while (count < lst->count_a - lst->max_a - 1)
		{
			ft_rra(lst);
			ft_printf("rra\n");
			count++;
		}
	}
}

void	to_a_2(t_push_swap *lst, int count)
{
	if (lst->min_a <= lst->count_a / 2)
	{
		while (count < lst->min_a)
		{
			ft_ra(lst);
			ft_printf("ra\n");
			count++;
		}
	}
	else
	{
		while (count < lst->count_a - lst->min_a)
		{
			ft_rra(lst);
			ft_printf("rra\n");
			count++;
		}
	}
}

static void	to_a_3_bis(t_push_swap *lst, int count_a, int count)
{
	if (count_a < lst->count_a / 2)
	{
		while (count < count_a + 1)
		{
			ft_ra(lst);
			ft_printf("ra\n");
			count++;
		}
	}
	else
	{
		while (count < lst->count_a - count_a - 1)
		{
			ft_rra(lst);
			ft_printf("rra\n");
			count++;
		}
	}
}

void	to_a_3(t_push_swap *lst, int count, int count_a)
{
	count = 0;
	while (count_a < lst->count_a - 1)
	{
		if (lst->a[count_a] < lst->b[0] && lst->b[0] < lst->a[count_a + 1])
		{
			to_a_3_bis(lst, count_a, count);
			break ;
		}
	count_a++;
	}
}

void	to_a_4(t_push_swap *lst)
{
	if (lst->min_a <= lst->count_a / 2)
	{
		while (lst->min_a != 0)
		{
			ft_ra(lst);
			ft_printf("ra\n");
			lst->min_a--;
		}
	}
	if (lst->min_a > lst->count_a / 2)
	{
		while (lst->min_a != lst->count_a)
		{
			ft_rra(lst);
			ft_printf("rra\n");
			lst->min_a++;
		}
	}
}
