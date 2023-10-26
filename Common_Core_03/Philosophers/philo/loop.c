/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:13:52 by abarbieu          #+#    #+#             */
/*   Updated: 2023/10/26 12:15:23 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	check_meal(t_philo *philo)
{
	u_int64_t	time_to_die;
	int			res;

	pthread_mutex_lock(&philo->data->lock);
	time_to_die = philo->time_to_die;
	pthread_mutex_unlock(&philo->data->lock);
	if (get_time() >= time_to_die)
	{
		state(philo, DIE);
		pthread_mutex_lock(&philo->data->lock);
		philo->data->dead = TRUE;
		pthread_mutex_unlock(&philo->data->lock);
		return (0);
	}
	if (philo->data->nb_to_eat == -1)
		return (0);
	pthread_mutex_lock(&philo->data->lock);
	res = philo->eat_count >= philo->data->nb_to_eat;
	pthread_mutex_unlock(&philo->data->lock);
	return (res);
}

void	checker(t_data	*data)
{
	int		dead;
	int		finished;
	int		count;

	pthread_mutex_lock(&data->lock);
	dead = data->dead;
	pthread_mutex_unlock(&data->lock);
	while (dead == FALSE)
	{
		count = -1;
		finished = 0;
		while (data->dead == FALSE && ++count < data->nb_philo)
			finished += check_meal(&data->philo[count]);
		if (finished == data->nb_philo)
		{
			pthread_mutex_lock(&data->lock);
			data->dead = TRUE;
			pthread_mutex_unlock(&data->lock);
		}
		pthread_mutex_lock(&data->lock);
		dead = data->dead;
		pthread_mutex_unlock(&data->lock);
	}
	return ;
}
