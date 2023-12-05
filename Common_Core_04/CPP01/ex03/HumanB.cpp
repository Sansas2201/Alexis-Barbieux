/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:36:49 by abarbieu          #+#    #+#             */
/*   Updated: 2023/12/05 11:30:10 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): weaponB(NULL), nameB(name)
{
	// std::cout << "Constructor called" << std::endl;
}

HumanB::~HumanB()
{
	// std::cout << "Destructor called" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weaponB = &weapon;
}


void	HumanB::attack()
{
	if (!weaponB)
		return ;
	std::cout << this->nameB << "  attacks with their " << this->weaponB->getType() << std::endl;
}