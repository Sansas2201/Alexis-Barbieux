/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:29:26 by abarbieu          #+#    #+#             */
/*   Updated: 2023/05/09 09:27:24 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	error_ret(char c, int chara, int item, int exit)
{
	if (chara == 0 || chara > 1)
		write(1, "Error : Wrong number of character position", 42);
	if (item == 0)
		write(1, "Error : No item on the map", 26);
	if (exit == 0 || exit > 1)
		write(1, "Error : Wrong number of exit", 28);
	if (c == 's')
		write(1, "Error : Map not closed", 21);
	if (c == 'p')
		write(1, "Error : No valid path", 21);
	return (FALSE);
}
