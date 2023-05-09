/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:28:51 by abarbieu          #+#    #+#             */
/*   Updated: 2023/05/09 10:02:41 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>

# define TRUE 1
# define FALSE 0

/*typedef struct s_variable
{
	int	chara;
	int	item;
	int	exit;
	int	i;
	int	j;

	chara = 0;
	item = 0;
	exit = 0;
	i = 0;
	j = 0;
}	t_variable;*/

int	check_ber(char *map);
int	check_map(char *map);

#endif
