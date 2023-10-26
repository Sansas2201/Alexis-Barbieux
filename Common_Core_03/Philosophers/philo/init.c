/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 09:08:38 by abarbieu          #+#    #+#             */
/*   Updated: 2023/10/26 11:19:56 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	alloc(t_data *data, char *argv)
{
	data->philo = malloc(sizeof(t_philo) * ft_atoi(argv));
	if (!data->philo)
		return (-1);
	data->forks = malloc(sizeof(pthread_mutex_t) * ft_atoi(argv));
	if (!data->forks)
		return (ft_free(data));
	data->philo_thread = malloc(sizeof(pthread_t) * ft_atoi(argv));
	if (!data->philo_thread)
		return (ft_free(data));
	return (0);
}

static int	mutex_init(t_data *data, char *argv)
{
	int	count;

	count = 0;
	if (pthread_mutex_init(&data->msg, NULL))
		return (ft_free(data));
	if (pthread_mutex_init(&data->lock, NULL))
	{
		pthread_mutex_destroy(&data->msg);
		return (ft_exit(data, 0));
	}
	while (count < ft_atoi(argv))
	{
		if (pthread_mutex_init(&data->forks[count], NULL))
			return (ft_exit(data, count));
		count++;
	}
	return (0);
}

static void	init_data(char **argv, t_data *data)
{
	data->dead = FALSE;
	data->finished = FALSE;
	data->nb_philo = ft_atoi(argv[1]);
	if (argv[5])
		data->nb_to_eat = ft_atoi(argv[5]);
	else
		data->nb_to_eat = -1;
	data->time_to_die = ft_atoi(argv[2]);
	data->time_to_eat = ft_atoi(argv[3]);
	data->time_to_sleep = ft_atoi(argv[4]);
}

static void	init_philo(char **argv, t_philo *philo, t_data *data, int count)
{
	philo[count].data = data;
	philo[count].philo_id = count + 1;
	if (count == 0)
	{
		philo[count].left_fork = &philo->data->forks[ft_atoi(argv[1]) - 1];
		philo[count].right_fork = &philo->data->forks[0];
	}
	else
	{
		philo[count].left_fork = &philo->data->forks[count - 1];
		philo[count].right_fork = &philo->data->forks[count];
	}
	philo[count].eat_count = 0;
	philo[count].time_to_die = data->time_to_die;
}

int	init(t_data *data, char **argv)
{
	int	count;

	if (alloc(data, argv[1]) == -1)
		return (-1);
	if (mutex_init(data, argv[1]) == -1)
		return (-1);
	init_data(argv, data);
	count = 0;
	while (count < ft_atoi(argv[1]))
	{
		init_philo(argv, data->philo, data, count);
		count++;
	}
	return (0);
}
