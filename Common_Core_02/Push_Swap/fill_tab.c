/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:00:09 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/14 10:08:46 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_atoi_ps(const char *str)
{
	int				i;
	int				count;
	long long int	res;

	i = 0;
	count = 1;
	res = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	if (count == -1)
		res *= -1;
	if (res < INT_MIN || INT_MAX < res)
		exit (write(1, "Error : Only INT !\n", 19));
	return (res);
}

static void	fill_tab_1_bis(char **argv, t_push_swap *lst)
{
	lst->a = malloc(sizeof(int) * (lst->count));
	lst->b = malloc(sizeof(int) * (lst->count));
	if (!lst->a || !lst->b)
		exit(0);
	lst->tmp = ft_split(argv[1], ' ');
	if (!lst->tmp)
		exit(0);
}

void	fill_tab_1(char **argv, t_push_swap *lst)
{
	int	i;

	i = 0;
	lst->count = 0;
	if (ft_isdigit(argv[1][i]) == 1)
		lst->count++;
	while (argv[1][i])
	{
		while (argv[1][i] == ' ' && ft_isdigit(argv[1][i + 1]) == 0)
			i++;
		if (argv[1][i] == ' ' && ft_isdigit(argv[1][i + 1]) == 1)
			lst->count++;
		i++;
	}
	if (lst->count == 0 || lst->count == 1)
		exit (write(1, "Error : Need at least 2 numbers !\n", 34));
	fill_tab_1_bis(argv, lst);
	lst->count_a = lst->count;
	lst->count_b = 0;
	i = 0;
	while (lst->tmp[i])
	{
		lst->a[i] = ft_atoi_ps(lst->tmp[i]);
		i++;
	}
}

void	fill_tab_2(int argc, char **argv, t_push_swap *lst)
{
	int	y;

	y = 1;
	lst->a = malloc(sizeof(int) * argc - 1);
	lst->b = malloc(sizeof(int) * argc - 1);
	if (!lst->a || !lst->b)
		exit(0);
	lst->count_a = argc - 1;
	lst->count_b = 0;
	while (y < argc)
	{
		lst->a[y - 1] = ft_atoi_ps(argv[y]);
		y++;
	}
	y = 0;
}
