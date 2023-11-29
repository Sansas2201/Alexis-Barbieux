/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   micro_paint.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:12:59 by abarbieu          #+#    #+#             */
/*   Updated: 2023/10/30 10:11:32 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MICRO_PAINT_H

# define MICRO_PAINT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

# define TRUE 1
# define FALSE 0

typedef struct	s_drawing
{
	int		width;
	int		height;
	char	*canvas;
}	t_drawing;


typedef struct	s_rectangle
{
	char	r_char;
	float	x;
	float	y;
	float	width;
	float	height;
	char	rect_char;
}	t_rectangle;


#endif