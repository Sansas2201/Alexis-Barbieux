/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:50:07 by abarbieu          #+#    #+#             */
/*   Updated: 2023/10/26 10:26:42 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

u_int64_t	get_time(void)
{
	struct timeval	current_time;
	int				s;
	int				ms;

	gettimeofday(&current_time, NULL);
	s = current_time.tv_sec;
	ms = current_time.tv_usec * 0.001;
	return ((s * 1000) + ms);
}

void	ft_usleep(useconds_t time)
{
	u_int64_t	start;

	start = get_time();
	while ((get_time() - start) < time)
		usleep(time * 0.1);
	return ;
}

int	ft_exit(t_data *data, int limit)
{
	int	count;

	count = -1;
	while (++count < limit)
		pthread_mutex_destroy(&data->forks[count]);
	pthread_mutex_destroy(&data->msg);
	pthread_mutex_destroy(&data->lock);
	return (ft_free(data));
}

int	ft_free(t_data *data)
{
	if (data->philo)
		free (data->philo);
	if (data->forks)
		free(data->forks);
	if (data->philo_thread)
		free(data->philo_thread);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	count;
	int	res;

	i = 0;
	count = 1;
	res = 0;
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	if (count == -1)
		res *= -1;
	return (res);
}
