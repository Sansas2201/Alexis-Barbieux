/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:51:42 by abarbieu          #+#    #+#             */
/*   Updated: 2023/04/18 11:13:11 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	//int i;

	//i = 0;
		printf("%d.", isalpha('a'));
		printf("%d ", ft_isalpha('a'));
		//i++;
}*/
