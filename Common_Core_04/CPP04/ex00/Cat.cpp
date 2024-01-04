/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:42:05 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/23 08:19:33 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
	std::cout << "Default constructor called for Cat" << std::endl;
}

Cat::Cat(const Cat &cat){
	*this = cat;
	// std::cout << "Copy constructor called for Cat" << std::endl;
}

Cat& Cat::operator=(const Cat &cat){
	type = cat.type;
	// std::cout << "Copy assignement operator called for Cat" << std::endl;
	return *this;
}

Cat::~Cat(){
	std::cout << "Destructor called for Cat" << std::endl;
}

void	Cat::makeSound() const{
	std::cout << type << ": meow !" << std::endl;
}