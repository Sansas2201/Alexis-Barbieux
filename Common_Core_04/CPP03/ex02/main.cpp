/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:17:45 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/22 13:30:56 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(){
	ClapTrap	john("John");
	ScavTrap	doe("Doe");
	FragTrap	mike("Mike");

	std::cout << "ClapTrap John, ScavTrap Doe and FragTrap Mike encountered a Monster" << std::endl;

	john.attack("Monster");
	john.takeDamage(4);
	john.beRepaired(6);
	john.takeDamage(11);

	doe.attack("Monster");
	doe.takeDamage(42);
	doe.beRepaired(23);
	doe.takeDamage(12);
	doe.guardGate();

	mike.attack("Monster");
	mike.takeDamage(67);
	mike.beRepaired(51);
	mike.takeDamage(23);
	mike.attack("Monster");

	std::cout << "ClapTrap John, ScavTrap Doe and FragTrap Mike defeated the Monster" << std::endl;
	mike.highFivesGuys();
}