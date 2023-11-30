/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:27:09 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/06 10:09:39 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
		for (int y = 1; y < ac; y++)
		{
			for (size_t x = 0; x < strlen(av[y]); x++)
				std::cout << (char)toupper(av[y][x]);
			if (y < ac - 1)
				std::cout << " ";
		}
	if (ac >= 2)
		std::cout << "\n";
	return (0);
}