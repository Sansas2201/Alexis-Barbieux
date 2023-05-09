/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:44:06 by abarbieu          #+#    #+#             */
/*   Updated: 2023/05/08 15:16:10 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "Error : Wrong argument count/n", 30));
	if (check_ber(argv[1]) == FALSE)
		return (write(1, "Error : No map found/n", 22));
	if (check_map(argv[1]) == FALSE)
		return (0);

}
