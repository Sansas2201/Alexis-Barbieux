/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:32:28 by abarbieu          #+#    #+#             */
/*   Updated: 2023/07/19 12:39:01 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	get_path(t_pipex *lst, char **env)
{
	int		i;
	char	*tmp_path;

	i = 0;
	while (ft_strncmp("PATH", env[i], 4) != 0 && env[i] != 0)
		i++;
	if (env[i] != 0)
	{
		tmp_path = ft_substr(env[i], 5, 100);
		if (!tmp_path)
			exit(1);
		lst->path = ft_split(tmp_path, ':');
		free(tmp_path);
		if (!lst->path)
			exit (1);
		i = 0;
		while (lst->path[i] != 0)
		{
			lst->path[i] = ft_strjoin(lst->path[i], "/");
			lst->path[i] = ft_strjoin(lst->path[i], lst->cmd[0]);
			if (!lst->path)
				exit (1);
			i++;
		}
	}
}

void	exec(char *argv, char **env, t_pipex *lst)
{
	int	i;

	i = 0;
	lst->cmd = ft_split(argv, ' ');
	if (!lst->cmd)
	{
		perror("Malloc ");
		exit (1);
	}
	if (access(lst->cmd[0], X_OK) == 0)
		execve(lst->cmd[0], lst->cmd, env);
	else
	{
		get_path(lst, env);
		while (lst->path[i] != 0 && access(lst->path[i], X_OK) != 0)
			i++;
		if (access(lst->path[i], X_OK) == 0)
			execve(lst->path[i], lst->cmd, env);
	}
	write(2, "Command not found : ", 20);
	ft_putstr_fd(argv, 2);
	write(2, "\n", 1);
	exit (1);
}

void	first_cmd(char *argv, char **env, t_pipex *lst)
{
	lst->child = fork();
	if (lst->child == -1)
	{
		perror("Fork ");
		exit (1);
	}
	else if (!lst->child)
	{
		dup2(lst->fd_in, 0);
		dup2(lst->pipefd[1], 1);
		close(lst->fd_in);
		close(lst->pipefd[0]);
		close(lst->pipefd[1]);
		exec(argv, env, lst);
	}
}

void	second_cmd(char *argv, char **env, t_pipex *lst)
{
	lst->child_2 = fork();
	if (lst->child_2 == -1)
	{
		perror("Fork ");
		exit (1);
	}
	else if (!lst->child_2)
	{
		dup2(lst->pipefd[0], 0);
		dup2(lst->fd_out, 1);
		close(lst->pipefd[0]);
		close(lst->fd_out);
		exec(argv, env, lst);
	}
}

int	open_file(char *argv, int in_or_out)
{
	int	fd;

	if (in_or_out == 0)
		fd = open(argv, O_RDONLY, 0777);
	if (in_or_out == 1)
		fd = open(argv, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (fd == -1)
	{
		write(2, "zsh: no such file or directory: ", 32);
		ft_putstr_fd(argv, 2);
		write(2, "\n", 1);
	}
	return (fd);
}
