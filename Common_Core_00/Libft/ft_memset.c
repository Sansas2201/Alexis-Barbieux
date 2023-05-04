/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:55:42 by abarbieu          #+#    #+#             */
/*   Updated: 2023/04/18 11:23:19 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
    char str[50];
    strcpy(str,"This is string.h library function");
    puts(str);
    memset(str,'$',7);
    puts(str);
    strcpy(str,"This is string.h library function");
    puts(str);
    ft_memset(str,'k',7);
    puts(str);
    return(0);
}*/
