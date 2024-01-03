/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:59:10 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/22 13:11:57 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	ct_name = "Default";
	hit_points = 100;
	energy_point = 50;
	attack_damage = 20;
	std::cout << "Default constructor called for ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
	ct_name = name;
	hit_points = 100;
	energy_point = 50;
	attack_damage = 20;
	std::cout << "Constructor called for ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &st){
	*this = st;
	// std::cout << "Copy constructor called for ScavTrap" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &st){
	ct_name = st.ct_name;
	hit_points = st.hit_points;
	energy_point = st.energy_point;
	attack_damage = st.attack_damage;
	// std::cout << "Copy assignement operator called for ScavTrap" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "Destructor called for ScavTrap" << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if (hit_points > 0 && energy_point > 0){
		energy_point--;
		std::cout << ct_name << " attacks " << target << " with determination ! He inflicts " << attack_damage << " points of damage !" << std::endl << ct_name << " has " << energy_point << " energy points left" << std::endl;
	}
	else if (this->hit_points <= 0)
		std::cout << this->ct_name << "has been destroyed, he cannot damage the target !" << std::endl;
	else
		std::cout << this->ct_name << "does not have any energy left, he cannot damage the target !" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << ct_name << " is now in Gate keeper mode" << std::endl;
}

