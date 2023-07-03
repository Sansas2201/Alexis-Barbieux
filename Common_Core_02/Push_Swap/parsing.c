/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:58:52 by abarbieu          #+#    #+#             */
/*   Updated: 2023/06/28 13:47:29 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_push_swap *lst)
{
	int	count;

	count = 0;
	while (count < lst->count_a - 1)
	{
		if (lst->a[count] > lst->a[count + 1])
			return (FALSE);
		count++;
	}
	exit (0);
}

int	check_dup(t_push_swap *lst)
{
	int	count;
	int	cmp;

	count = 0;
	while (count < lst->count_a - 1)
	{
		cmp = count + 1;
		while (cmp < lst->count_a)
		{
			if (lst->a[count] == lst->a[cmp])
				exit (write(1, "Error : No duplicate allowed !\n", 29));
			cmp++;
		}
		count++;
	}
	return (TRUE);
}

int	check_more_arg(int argc, char **argv)
{
	int	x;
	int	y;

	y = 1;
	while (y < argc)
	{
		x = 0;
		while (argv[y][x])
		{
			if (argv[y][x] == ' ')
				exit (write(1, "Error : Wrong arguments !\n", 26));
			if (argv[y][x] == '-' && x == 0)
				x++;
			if (ft_isdigit(argv[y][x]) == 0)
				exit (write(1, "Error : Only numbers in arguments !\n", 36));
			x++;
		}
		y++;
	}
	return (TRUE);
}

int	check_one_arg(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i])
	{
		if (ft_isdigit(argv[1][i]) == 1 || argv[1][i] == ' ' || \
			argv[1][i] == '-')
			i++;
		else
			return (FALSE);
	}
	return (TRUE);
}
