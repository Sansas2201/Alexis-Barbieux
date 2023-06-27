/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:30:15 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/27 13:44:44 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	search_max_a(t_push_swap *lst)
{
	int	count;

	lst->max_a = 0;
	count = 0;
	while (count < lst->count_a)
	{
		if (lst->a[lst->max_a] < lst->a[count])
			lst->max_a = count;
		count++;
	}
	return (TRUE);
}

int	search_max_b(t_push_swap *lst)
{
	int	count;

	lst->max_b = 0;
	count = 0;
	while (count < lst->count_b)
	{
		if (lst->b[lst->max_b] < lst->b[count])
			lst->max_b = count;
		count++;
	}
	return (TRUE);
}

int	search_min_a(t_push_swap *lst)
{
	int	count;

	lst->min_a = 0;
	count = 0;
	while (count < lst->count_a)
	{
		if (lst->a[lst->min_a] > lst->a[count])
			lst->min_a = count;
		count++;
	}
	return (TRUE);
}

int	search_min_b(t_push_swap *lst)
{
	int	count;

	lst->min_b = 0;
	count = 0;
	while (count < lst->count_b)
	{
		if (lst->b[lst->min_b] > lst->b[count])
			lst->min_b = count;
		count++;
	}
	return (TRUE);
}
