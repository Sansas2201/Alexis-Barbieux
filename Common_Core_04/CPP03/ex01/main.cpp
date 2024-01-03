/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:17:45 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/22 13:26:30 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(){
	ClapTrap	john("John");
	ScavTrap	doe("Doe");

	std::cout << "ClapTrap John and ScavTrap Doe encountered a Monster" << std::endl;
	john.attack("Monster");
	john.takeDamage(4);
	john.beRepaired(6);
	john.takeDamage(15);

	doe.attack("Monster");
	doe.takeDamage(42);
	doe.beRepaired(23);
	doe.takeDamage(12);
	doe.guardGate();
}