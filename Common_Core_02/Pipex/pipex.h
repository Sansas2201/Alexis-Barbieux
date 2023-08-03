/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:36:25 by abarbieu          #+#    #+#             */
/*   Updated: 2023/08/03 12:52:15 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/wait.h>
# include <unistd.h>
# include "Libft/libft.h"

# define TRUE 1
# define FALSE 0

typedef struct s_pipex
{
	char	**cmd;
	char	**path;
	int		child_count;
	int		fd_in;
	int		fd_out;
	int		pipefd[2];
	pid_t	child;
	pid_t	child_2;
}	t_pipex;

void	exec(char *argv, char **env, t_pipex *lst);
void	first_cmd(char *argv, char **env, t_pipex *lst);
int		is_empty(char *argv);
int		is_whitespace(char *argv);
int		open_file(char *argv, int in_or_out);
void	second_cmd(char *argv, char **env, t_pipex *lst);

#endif