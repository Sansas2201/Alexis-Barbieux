/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:32:58 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/14 11:19:12 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weaponA(weapon), nameA(name)
{
	// std::cout << "Constructor called" << std::endl;
}

HumanA::~HumanA()
{
	// std::cout << "Destructor called" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->nameA << "  attacks with their " << this->weaponA.getType() << std::endl;
}