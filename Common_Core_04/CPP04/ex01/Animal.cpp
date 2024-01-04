/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:40:02 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/23 08:22:03 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Undefined"){
	std::cout << "Default constructor called for Animal" << std::endl;
}

Animal::Animal(const Animal &animal){
	*this = animal;
	// std::cout << "Copy constructor called for Animal" << std::endl;
}

Animal&	Animal::operator=(const Animal &animal){
	this->type = animal.type;
	// std::cout << "Copy assignement operator called for Animal" << std::endl;
	return *this;
}

Animal::~Animal(){
	std::cout << "Destructor called for Animal" << std::endl;
}

std::string	Animal::getType() const{
	return this->type;
}

void	Animal::makeSound() const{
	std::cout << type << ": undefined sound" << std::endl;
}