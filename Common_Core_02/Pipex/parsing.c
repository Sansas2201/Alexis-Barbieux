/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:34:28 by abarbieu          #+#    #+#             */
/*   Updated: 2023/08/16 08:15:53 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	is_empty(char *argv, int in_or_out)
{
	static int	in = 0;
	static int	out = 0;

	if (in_or_out == 0 && in == 1)
		return (1);
	if (in_or_out == 1 && out == 1)
		return (1);
	if (ft_strlen(argv) == 0)
	{
		write (2, "zsh: permission denied:\n", 24);
		if (in_or_out == 0)
			in = 1;
		if (in_or_out == 1)
			out = 1;
		return (1);
	}
	return (0);
}

int	is_whitespace(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_isalnum(argv[i]) == 1)
			return (0);
		i++;
	}
	write (2, "zsh: command not found:\n", 24);
	return (1);
}
