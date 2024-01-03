/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:21:05 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/22 13:25:00 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	ct_name = "Default";
	hit_points = 100;
	energy_point = 100;
	attack_damage = 30;
	std::cout << "Default constructor called for FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string name){
	ct_name = name;
	hit_points = 100;
	energy_point = 100;
	attack_damage = 30;
	std::cout << "Constructor called for FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ft){
	*this = ft;
	// std::cout << "Copy constructor called for FragTrap" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &ft){
	ct_name = ft.ct_name;
	hit_points = ft.hit_points;
	energy_point = ft.energy_point;
	attack_damage = ft.attack_damage;
	// std::cout << "Copy assignement operator called for FragTrap" << std::endl;
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "Destructor called for FragTrap" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << ct_name << " wants to do high fives !" << std::endl;
}