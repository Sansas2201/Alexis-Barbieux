/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:40:16 by abarbieu          #+#    #+#             */
/*   Updated: 2023/10/26 12:19:36 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>
# include <pthread.h>
# include <stdio.h>

# define TRUE 1
# define FALSE 0

//MESSAGES
# define THINKING "is thinking"
# define FORK "has taken a fork"
# define EATING "is eating"
# define SLEEPING "is sleeping"
# define DIE "died"

typedef struct s_philo
{
	struct s_data	*data;
	int				philo_id;
	int				eat_count;
	u_int64_t		time_to_die;
	pthread_mutex_t	*left_fork;
	pthread_mutex_t	*right_fork;
}	t_philo;

typedef struct s_data
{
	int				dead;
	int				finished;
	int				nb_philo;
	int				nb_to_eat;
	u_int64_t		time_to_die;
	u_int64_t		time_to_eat;
	u_int64_t		time_to_sleep;
	u_int64_t		start_time;
	t_philo			*philo;
	pthread_t		*philo_thread;
	pthread_mutex_t	*forks;
	pthread_mutex_t	msg;
	pthread_mutex_t	lock;
}	t_data;

//INIT
int			init(t_data *data, char **argv);

//THREAD
int			ft_thread(t_data *data);

//LOOP
void		checker(t_data	*data);

//OUTPUT
void		state(t_philo *philo, char *msg);

//UTILS
int			ft_atoi(const char *str);
int			ft_exit(t_data *data, int limit);
int			ft_free(t_data *data);
void		ft_usleep(useconds_t time);
u_int64_t	get_time(void);

#endif