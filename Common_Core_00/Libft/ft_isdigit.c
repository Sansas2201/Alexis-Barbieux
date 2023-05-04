/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:49:01 by abarbieu          #+#    #+#             */
/*   Updated: 2023/04/18 11:15:48 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
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

    i = 0;
    while (i < 200)
    {
        printf("%d.", isdigit(i));
        printf("%d ", ft_isdigit(i));
        i++;
    }
}*/
