/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:11:47 by abarbieu          #+#    #+#             */
/*   Updated: 2023/04/25 14:06:46 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ptr_len(uintptr_t point)
{
	int	len;

	len = 0;
	while (point != 0)
	{
		len++;
		point /= 16;
	}
	return (len);
}

static void	ft_convert(uintptr_t point)
{
	if (point >= 16)
	{
		ft_convert(point / 16);
		ft_convert(point % 16);
	}
	else
	{
		if (point <= 9)
			ft_c(point + '0');
		else
			ft_c(point - 10 + 'a');
	}
}

int	ft_point(unsigned long long point)
{
	int	totlen;

	totlen = 0;
	write(1, "0x", 2);
	totlen += 2;
	if (point == 0)
	{
		write(1, "0", 1);
		totlen++;
	}
	else
	{
		ft_convert(point);
		totlen += ptr_len(point);
	}
	return (totlen);
}
/*
int	main()
{
	ft_point(128);
}*/
