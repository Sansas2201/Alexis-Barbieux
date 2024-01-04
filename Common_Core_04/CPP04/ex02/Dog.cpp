/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:41:20 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/23 09:27:45 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
	try{
		this->brain = new Brain();
	}
	catch(std::bad_alloc& e){
		std::cout << "Memory allocation failed: " << e.what() << std::endl;
	}
	std::cout << "Default constructor called for Dog" << std::endl;
}

Dog::Dog(const Dog &dog){
	*this = dog;
	// std::cout << "Copy constructor called for Dog" << std::endl;
}

Dog& Dog::operator=(const Dog &dog){
	type = dog.type;
	this->brain = new Brain(*dog.brain);
	// std::cout << "Copy assignement operator called for Dog" << std::endl;
	return *this;
}

Dog::~Dog(){
	delete this->brain;
	std::cout << "Destructor called for Dog" << std::endl;
}

void	Dog::makeSound() const{
	std::cout << type << ": bark !" << std::endl;
}