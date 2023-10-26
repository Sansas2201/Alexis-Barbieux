/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:53:07 by abarbieu          #+#    #+#             */
/*   Updated: 2023/10/26 12:24:25 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	exception(char *argv)
{
	printf("0ms 1 has taken a fork\n%dms 1 died\n", ft_atoi(argv));
	return (0);
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc < 5 || 6 < argc || ft_atoi(argv[1]) == 0 || ft_atoi(argv[1]) > 200 \
		|| (argc == 6 && ft_atoi(argv[5]) == 0))
		return (0);
	if (ft_atoi(argv[1]) == 1)
		return (exception(argv[2]));
	if (init(&data, argv) == -1)
		return (-1);
	if (ft_thread(&data) == -1)
		return (-1);
	ft_exit(&data, data.nb_philo);
	return (0);
}
