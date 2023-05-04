/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 11:22:15 by abarbieu          #+#    #+#             */
/*   Updated: 2023/04/18 11:28:14 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	if (size <= 0)
		return (0);
	while (((unsigned char)*str1) == ((unsigned char)*str2) && size--)
	{
		if (!*str1 || !*str2)
			return (0);
		str1++;
		str2++;
	}
	if (!size)
		return ((unsigned char)*--str1 - (unsigned char)*--str2);
	if (((unsigned char)*str1) > ((unsigned char)*str2))
		return (1);
	if (((unsigned char)*str1) < ((unsigned char)*str2))
		return (-1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	printf("%d ", ft_strncmp("salut", "salwt", 5));
	    printf("%d", strncmp("salut", "salwt", 5));
}*/
