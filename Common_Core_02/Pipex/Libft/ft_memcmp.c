/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:44:06 by abarbieu          #+#    #+#             */
/*   Updated: 2023/04/18 11:39:26 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(void *s1, void *s2, int n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	i = 0;
	str1 = ((unsigned char *)s1);
	str2 = ((unsigned char *)s2);
	if (n <= 0)
		return (0);
	n -= 1;
	while (str1[i] == str2[i] && n--)
	{
		i++;
	}
	if (str1[i] > str2[i])
		return (str1[i] - str2[i]);
	if (str1[i] < str2[i])
		return (str1[i] - str2[i]);
	return (0);
}
