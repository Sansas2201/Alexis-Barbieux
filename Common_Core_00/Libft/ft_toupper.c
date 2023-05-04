/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:31:25 by abarbieu          #+#    #+#             */
/*   Updated: 2023/04/03 14:36:47 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%c.", toupper('a'));
	printf("%c ", ft_toupper('a'));
}*/
