/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:39:32 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/27 13:12:28 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_push_swap *lst)
{
	int	count;
	int	temp;

	count = 0;
	temp = lst->b[0];
	while (count < lst->count_b - 1)
	{
		lst->b[count] = lst->b[count + 1];
		count++;
	}
	count = lst->count_a;
	while (count > 0)
	{
		lst->a[count] = lst->a[count - 1];
		count--;
	}
	lst->a[0] = temp;
	lst->count_a++;
	lst->count_b--;
	ft_printf("pa\n");
}

void	ft_pb(t_push_swap *lst)
{
	int	count;
	int	temp;

	count = 0;
	temp = lst->a[0];
	while (count < lst->count_a - 1)
	{
		lst->a[count] = lst->a[count + 1];
		count++;
	}
	count = lst->count_b;
	while (count > 0)
	{
		lst->b[count] = lst->b[count - 1];
		count--;
	}
	lst->b[0] = temp;
	lst->count_a--;
	lst->count_b++;
	ft_printf("pb\n");
}
