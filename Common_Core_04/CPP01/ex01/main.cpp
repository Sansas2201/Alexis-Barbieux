/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:38:56 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/14 09:22:58 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main()
{
	Zombie	*horde = zombieHorde(5, "Foo");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;
}