/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:37:07 by abarbieu          #+#    #+#             */
/*   Updated: 2023/04/03 14:40:24 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
    printf("%c.", tolower('A'));
    printf("%c ", ft_tolower('A'));
}*/
