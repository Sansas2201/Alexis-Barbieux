/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_paint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:12:34 by abarbieu          #+#    #+#             */
/*   Updated: 2023/10/31 10:35:52 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mini_paint.h"

static int	get_draw_zone(FILE *file, t_drawing *draw)
{
	char	background;
	char	*tmp;
	int		count;

	count = 0;
	if (fscanf(file, "%d %d %c\n", &draw->width, &draw->height, &background) == 3)
	{
		if (draw->width <= 0 || 300 < draw->width || draw->height <= 0 || 300 < draw->width)
			return (1);
		tmp = malloc(sizeof(char) * (draw->width * draw->height));
		draw->canvas = tmp;
		if (!draw->canvas)
			return (1);
		while (count < draw->width * draw->height)
		{
			draw->canvas[count] = background;
			count++;
		}
		return (0);
	}
	return (1);
}

int check_pos(float x, float y, float center_x, float center_y, float radius)
{
	float distance = sqrtf((x - center_x) * (x - center_x) + (y - center_y) * (y - center_y));
	if (distance <= radius)
	{
		if ((distance - radius) < 1.0000000)
			return(1);
		return(2);
	}
	return(0);
}

static int	exec(FILE *file, t_drawing *draw)
{
	int				scan;
	int				y;
	int				x;
	int				pos;
	t_circle		circ;

	while((scan = fscanf(file, "%c %f %f %f %c\n", &circ.c_char, &circ.x, &circ.y, &circ.radius, &circ.circ_char)) == 5)
	{
		if (circ.radius <= 0.0000000 || (circ.c_char != 'c' && circ.c_char != 'C'))
			break ;
		y = 0;
		while (y < draw->height)
		{
			x = 0;
			while (x < draw->width)
			{
				pos = check_pos((float)x, (float)y, circ.x, circ.y, circ.radius);
				if (pos == 1 || (pos == 2 && circ.c_char == 'C'))
					draw->canvas[y * draw->width + x] = circ.circ_char;
				x++;
			}
			y++;
		}
	}
	if (scan != -1)
	{
		free(draw->canvas);
		fclose(file);
		return (1);
	}
	y = 0;
	while (y < draw->height)
	{
		write(1, draw->canvas + y * draw->width, draw->width);
		write(1, "\n", 1);
		y++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	FILE *file;
	t_drawing		draw;

	if (argc != 2)
	{
		write (1, "Error: argument\n", 16);
		return (1);
	}
	file = fopen(argv[1], "r");
	if (file && !get_draw_zone(file, &draw) && !exec(file, &draw))
	{
		free (draw.canvas);
		fclose(file);
		return (0);
	}
	write(1, "Error: Operation file corrupted\n", 32);
	return (1);
}