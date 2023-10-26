/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thread.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:39:50 by abarbieu          #+#    #+#             */
/*   Updated: 2023/10/26 12:17:35 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void	eat(t_philo *philo)
{
	pthread_mutex_lock(philo->left_fork);
	state(philo, FORK);
	pthread_mutex_lock(philo->right_fork);
	state(philo, FORK);
	state(philo, EATING);
	pthread_mutex_lock(&philo->data->lock);
	philo->time_to_die = get_time() + philo->data->time_to_die;
	pthread_mutex_unlock(&philo->data->lock);
	ft_usleep(philo->data->time_to_eat);
	pthread_mutex_lock(&philo->data->lock);
	philo->eat_count++;
	pthread_mutex_unlock(&philo->data->lock);
	pthread_mutex_unlock(philo->left_fork);
	pthread_mutex_unlock(philo->right_fork);
	state(philo, SLEEPING);
	ft_usleep(philo->data->time_to_sleep);
}

static void	*routine(void *philo_pointer)
{
	t_philo	*philo;
	int		dead;

	philo = (t_philo *) philo_pointer;
	pthread_mutex_lock(&philo->data->lock);
	dead = philo->data->dead;
	pthread_mutex_unlock(&philo->data->lock);
	while (dead == FALSE)
	{
		eat(philo);
		state(philo, THINKING);
		pthread_mutex_lock(&philo->data->lock);
		dead = philo->data->dead;
		pthread_mutex_unlock(&philo->data->lock);
	}
	return ((void *)0);
}

static int	destroy_thread(t_data *data, int limit)
{
	int	count;

	count = 0;
	while (count < limit)
	{
		if (pthread_join(data->philo_thread[count], NULL))
			return (ft_exit(data, data->nb_philo));
		count++;
	}
	return (0);
}

int	ft_thread(t_data *data)
{
	int	count;

	count = 0;
	data->start_time = get_time();
	while (count < data->nb_philo)
	{
		data->philo[count].time_to_die = data->time_to_die + get_time();
		if (pthread_create(&data->philo_thread[count], NULL, &routine, \
			&data->philo[count]))
		{
			destroy_thread(data, count);
			return (ft_exit(data, data->nb_philo));
		}
		count++;
		usleep(1000);
	}
	checker(data);
	destroy_thread(data, data->nb_philo);
	return (0);
}
