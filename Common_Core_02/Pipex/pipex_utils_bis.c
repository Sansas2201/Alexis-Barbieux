/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils_bis.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:26:03 by abarbieu          #+#    #+#             */
/*   Updated: 2023/08/08 13:28:53 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	command_not_found(char *argv)
{
	if (argv[0] == '/')
		write(2, "zsh: no such file or directory: ", 32);
	else
		write(2, "zsh: command not found: ", 24);
	ft_putstr_fd(argv, 2);
	write(2, "\n", 1);
}
