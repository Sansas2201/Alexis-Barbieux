/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:53:37 by abarbieu          #+#    #+#             */
/*   Updated: 2023/04/18 11:12:41 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') \
			|| ('0' <= c && c <= '9'))
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
		printf("%d.", isalnum(i));
		printf("%d ", ft_isalnum(i));
		i++;
	}										    
}*/
