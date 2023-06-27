/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:42:48 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/27 13:42:31 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_push_swap *lst)
{
	int	count;
	int	temp;

	count = lst->count_a - 1;
	temp = lst->a[lst->count_a - 1];
	while (count > 0)
	{
		lst->a[count] = lst->a[count - 1];
		count--;
	}
	lst->a[0] = temp;
}

void	ft_rrb(t_push_swap *lst)
{
	int	count;
	int	temp;

	count = lst->count_b - 1;
	temp = lst->b[lst->count_b - 1];
	while (count > 0)
	{
		lst->b[count] = lst->b[count - 1];
		count--;
	}
	lst->b[0] = temp;
}

void	ft_rrr(t_push_swap *lst)
{
	ft_rra(lst);
	ft_rrb(lst);
	ft_printf("rrr\n");
}
