/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 08:39:42 by abarbieu          #+#    #+#             */
/*   Updated: 2023/12/05 08:47:28 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
	type = "cure";
	std::cout << "Default constructor called for Cure" << std::endl;
}

Cure::Cure(const Cure &cure){
	*this = cure;
	// std::cout << "Copy constructor called for Cure" << std::endl;
}

Cure& Cure::operator=(const Cure &cure){
	type = cure.type;
	// std::cout << "Copy assignement operator called for Cure" << std::endl;
	return *this;
}

Cure::~Cure(){
	std::cout << "Destructor called for Cure" << std::endl;
}

AMateria* Cure::clone() const{
	const AMateria* cure = new Cure();
	return cure;
}