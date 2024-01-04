/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:40:02 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/23 09:43:14 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): type("Undefined"){
	std::cout << "Default constructor called for AAnimal" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal){
	*this = animal;
	// std::cout << "Copy constructor called for AAnimal" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal &animal){
	this->type = animal.type;
	// std::cout << "Copy assignement operator called for AAnimal" << std::endl;
	return *this;
}

AAnimal::~AAnimal(){
	std::cout << "Destructor called for AAnimal" << std::endl;
}

std::string	AAnimal::getType() const{
	return this->type;
}

void	AAnimal::makeSound() const{
	std::cout << type << ": undefined sound" << std::endl;
}