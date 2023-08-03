/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:34:28 by abarbieu          #+#    #+#             */
/*   Updated: 2023/07/19 12:35:40 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	is_empty(char *argv)
{
	if (ft_strlen(argv) == 0)
	{
		write (2, "zsh: permission denied:\n", 24);
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
