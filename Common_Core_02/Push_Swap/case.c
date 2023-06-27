/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:13:51 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/27 13:20:09 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_3(t_push_swap *lst)
{
	if (lst->a[0] < lst->a[1] && lst->a[1] > lst->a[2] && lst->a[0] < lst->a[2])
		ft_printf("sa\nra\n");
	else if (lst->a[0] > lst->a[1] && lst->a[1] < lst->a[2] && \
		lst->a[0] > lst->a[2])
		ft_printf("ra\n");
	else if (lst->a[0] > lst->a[1] && lst->a[1] > lst->a[2])
		ft_printf("ra\nsa\n");
	else if (lst->a[0] > lst->a[1] && lst->a[1] < lst->a[2] && \
	lst->a[0] < lst->a[2])
		ft_printf("sa\n");
	else if (lst->a[0] < lst->a[1] && lst->a[1] > lst->a[2] && \
		lst->a[0] > lst->a[2])
		ft_printf("rra\n");
	sort_3(lst);
}

void	sort_3(t_push_swap *lst)
{
	if (lst->a[0] < lst->a[1] && lst->a[1] > lst->a[2] && lst->a[0] < lst->a[2])
	{
		ft_sa(lst);
		ft_ra(lst);
	}
	else if (lst->a[0] > lst->a[1] && lst->a[1] < lst->a[2] && \
		lst->a[0] > lst->a[2])
		ft_ra(lst);
	else if (lst->a[0] > lst->a[1] && lst->a[1] > lst->a[2])
	{
		ft_ra(lst);
		ft_sa(lst);
	}
	else if (lst->a[0] > lst->a[1] && lst->a[1] < lst->a[2] && \
		lst->a[0] < lst->a[2])
		ft_sa(lst);
	else if (lst->a[0] < lst->a[1] && lst->a[1] > lst->a[2] && \
		lst->a[0] > lst->a[2])
		ft_rra(lst);
}

void	case_4(t_push_swap *lst)
{
	ft_pb(lst);
	ft_printf("pb\n");
	case_3(lst);
	if (lst->b[0] > lst->a[2])
		ft_printf("rra\npa\nsa\nra\nra\n");
	else if (lst->b[0] < lst->a[0])
		ft_printf("pa\n");
	else if (lst->b[0] > lst->a[0] && lst->b[0] < lst->a[1])
		ft_printf("ra\npa\nrra\n");
	else
		ft_printf("rra\npa\nra\nra\n");
}

int	check_case(t_push_swap *lst)
{
	if (lst->count_a == 2)
	{
		ft_printf("sa\n");
		exit (0);
	}
	if (lst->count_a == 3)
	{
		case_3(lst);
		exit (0);
	}
	if (lst->count_a == 4)
	{
		case_4(lst);
		exit (0);
	}
	return (TRUE);
}
