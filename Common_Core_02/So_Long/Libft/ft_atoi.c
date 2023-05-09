/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:40:40 by abarbieu          #+#    #+#             */
/*   Updated: 2023/04/18 11:31:24 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	count;
	int	res;

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
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	printf("%d.", atoi("   \n  -1548abc "));
	printf("%d ", ft_atoi("      \n  -1548abc "));
}*/
