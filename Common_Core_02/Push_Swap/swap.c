/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:35:52 by abarbieu          #+#    #+#             */
/*   Updated: 2023/08/16 13:12:29 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_push_swap *lst)
{
	int	temp;

	temp = lst->a[0];
	lst->a[0] = lst->a[1];
	lst->a[1] = temp;
}

void	ft_sb(t_push_swap *lst)
{
	int	temp;

	temp = lst->b[0];
	lst->b[0] = lst->b[1];
	lst->b[1] = temp;
}

void	ft_ss(t_push_swap *lst)
{
	ft_sa(lst);
	ft_sb(lst);
}
