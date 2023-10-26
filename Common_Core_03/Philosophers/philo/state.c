/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 09:26:10 by abarbieu          #+#    #+#             */
/*   Updated: 2023/10/26 12:11:29 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	state(t_philo *philo, char *msg)
{
	u_int64_t	time;
	int			dead;

	time = get_time() - philo->data->start_time;
	pthread_mutex_lock(&philo->data->msg);
	pthread_mutex_lock(&philo->data->lock);
	dead = philo->data->dead;
	pthread_mutex_unlock(&philo->data->lock);
	if (dead == FALSE)
		printf("%llums %d %s\n", time, philo->philo_id, msg);
	pthread_mutex_unlock(&philo->data->msg);
}
