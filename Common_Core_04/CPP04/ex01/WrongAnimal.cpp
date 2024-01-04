/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 08:33:45 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/23 08:33:55 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Undefined"){
	std::cout << "Default constructor called for WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal){
	*this = animal;
	// std::cout << "Copy constructor called for WrongAnimal" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &animal){
	this->type = animal.type;
	// std::cout << "Copy assignement operator called for WrongAnimal" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Destructor called for WrongAnimal" << std::endl;
}

std::string	WrongAnimal::getType() const{
	return this->type;
}

void	WrongAnimal::makeSound() const{
	std::cout << type << ": undefined sound" << std::endl;
}