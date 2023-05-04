/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 11:52:36 by abarbieu          #+#    #+#             */
/*   Updated: 2023/04/11 12:50:45 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	li;

	li = n;
	if (li < 0)
	{
		ft_putchar_fd('-', fd);
		li *= -1;
	}
	if (li < 10)
	{
		ft_putchar_fd(li + 48, fd);
	}
	if (li > 9)
	{
		ft_putnbr_fd(li / 10, fd);
		ft_putnbr_fd(li % 10, fd);
	}
}
