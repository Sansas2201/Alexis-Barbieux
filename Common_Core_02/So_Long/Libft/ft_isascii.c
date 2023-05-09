/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:25:08 by abarbieu          #+#    #+#             */
/*   Updated: 2023/04/18 11:13:29 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    int i;
	int j;

    i = 0;
	j = 0;
    while (i < 200)
    {
        printf("%d %d.", j, isascii(i));
        printf("%d ", ft_isascii(i));
        i++;
		j++;
    }
}*/
