/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:18:04 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/22 12:46:58 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): ct_name("Default"), hit_points(10), energy_point(10), attack_damage(0){
	std::cout << "Default constructor called" << std::endl;
	std::cout << "ClapTrap " << this->ct_name << " created" << std::endl;
}

ClapTrap::ClapTrap(std::string name): ct_name(name), hit_points(10), energy_point(10), attack_damage(0){
	std::cout << "Constructor called" << std::endl;
	std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct){
	//std::cout << "Copy constructor called" << std::endl;
	*this = ct;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ct){
	//std::cout << "Copy assignement operator called" << std::endl;
	this->ct_name = ct.ct_name;
	this->hit_points = ct.hit_points;
	this->energy_point = ct.energy_point;
	this->attack_damage = ct.attack_damage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

//----------Function---------//

void ClapTrap::attack(const std::string& target){
	if (this->hit_points > 0 && this->energy_point > 0){
		std::cout << "ClapTrap " << this->ct_name << " attacks " << target << ", causing " << this->attack_damage << " points of damage !" << std::endl << this->ct_name << " has " << this->energy_point - 1 << " energy points left" << std::endl;
		this->energy_point--;
	}
	else if (this->hit_points <= 0)
		std::cout << "ClapTrap" << this->ct_name << "has been destroyed, he cannot attack !" << std::endl;
	else
		std::cout << "ClapTrap" << this->ct_name << "does not have any energy left, he cannot attack !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->hit_points <= 0)
		std::cout << "ClapTrap" << this->ct_name << "is already destroyed !" << std::endl;
	else{
		this->hit_points = this->hit_points - amount;
		std::cout << "ClapTrap " << this->ct_name << " has been attacked ! He lost " << amount << " points of health, he is now at " << this->hit_points << " points of health" << std::endl;
		if (this->hit_points <= 0)
			std::cout << "ClapTrap " << this->ct_name << " has been destroyed !" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->hit_points > 0 && this->energy_point > 0){
		std::cout << "ClapTrap " << this->ct_name << " repairs himself for " << amount << " points of health, he has now " << this->hit_points + amount << " points of health !" << std::endl << this->ct_name << " has " << this->energy_point - 1 << " energy points left" << std::endl;
		this->hit_points = this->hit_points + amount;
		this->energy_point--;
	}
	else if (this->hit_points <= 0)
		std::cout << "ClapTrap" << this->ct_name << "has been destroyed, he cannot repair himself !" << std::endl;
	else
		std::cout << "ClapTrap" << this->ct_name << "does not have any energy left, he cannot repair himself !" << std::endl;
}