/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:02:24 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/23 09:05:57 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Default constructor called for Brain" << std::endl;
}

Brain::Brain(const Brain &brain){
	*this = brain;
	// std::cout << "Copy constructor called for Brain" << std::endl;
}

Brain& Brain::operator=(const Brain &brain){
	for ( int i = 0; i < 100; i++ )
            this->ideas[i] = brain.ideas[i];
	// std::cout << "Copy assignement operator called for Brain" << std::endl;
	return *this;
}

Brain::~Brain(){
	std::cout << "Destructor called for Brain" << std::endl;
}