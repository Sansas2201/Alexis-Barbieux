/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 08:37:26 by abarbieu          #+#    #+#             */
/*   Updated: 2023/12/05 08:42:26 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
	type = "ice";
	std::cout << "Default constructor called for Ice" << std::endl;
}

Ice::Ice(const Ice &ice){
	*this = ice;
	// std::cout << "Copy constructor called for Ice" << std::endl;
}

Ice& Ice::operator=(const Ice &ice){
	type = ice.type;
	// std::cout << "Copy assignement operator called for Ice" << std::endl;
	return *this;
}

Ice::~Ice(){
	std::cout << "Destructor called for Ice" << std::endl;
}

AMateria* Ice::clone() const{
	
}
