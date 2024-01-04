/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:41:20 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/23 08:20:03 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
	std::cout << "Default constructor called for Dog" << std::endl;
}

Dog::Dog(const Dog &dog){
	*this = dog;
	// std::cout << "Copy constructor called for Dog" << std::endl;
}

Dog& Dog::operator=(const Dog &dog){
	type = dog.type;
	// std::cout << "Copy assignement operator called for Dog" << std::endl;
	return *this;
}

Dog::~Dog(){
	std::cout << "Destructor called for Dog" << std::endl;
}

void	Dog::makeSound() const{
	std::cout << type << ": bark !" << std::endl;
}