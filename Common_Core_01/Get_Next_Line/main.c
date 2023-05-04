/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 15:04:35 by abarbieu          #+#    #+#             */
/*   Updated: 2023/05/03 15:09:28 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	int	fd;
	int	i;
//	char	*line;

	i = 0;
	fd = open("exemple.txt", O_RDONLY);
	get_next_line(fd);
	//system("leaks a.out");
}
