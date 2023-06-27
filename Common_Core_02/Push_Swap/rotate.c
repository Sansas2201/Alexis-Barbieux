/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:43:45 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/27 13:43:25 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_push_swap *lst)
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
	lst->a[count] = temp;
}

void	ft_rb(t_push_swap *lst)
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
	lst->b[count] = temp;
}

void	ft_rr(t_push_swap *lst)
{
	ft_ra(lst);
	ft_rb(lst);
	ft_printf("rr\n");
}
