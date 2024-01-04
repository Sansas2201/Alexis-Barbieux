/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 08:35:41 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/23 08:35:51 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	type = "WrongCat";
	std::cout << "Default constructor called for WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat){
	*this = cat;
	// std::cout << "Copy constructor called for WrongCat" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &cat){
	type = cat.type;
	// std::cout << "Copy assignement operator called for WrongCat" << std::endl;
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "Destructor called for WrongCat" << std::endl;
}

void	WrongCat::makeSound() const{
	std::cout << type << ": meow !" << std::endl;
}