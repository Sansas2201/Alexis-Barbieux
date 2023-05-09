/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:43:11 by abarbieu          #+#    #+#             */
/*   Updated: 2023/04/18 11:14:20 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
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
	int	j;

	j = 0;
    i = 0;
    while (i < 200)
    {
        printf("%d %d.", j, isprint(i));
        printf("%d ", ft_isprint(i));
        i++;
		j++;
    }
}*/
