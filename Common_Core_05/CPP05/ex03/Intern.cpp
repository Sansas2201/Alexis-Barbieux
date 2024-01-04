/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:52:56 by abarbieu          #+#    #+#             */
/*   Updated: 2024/01/03 14:37:48 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &copy){
	*this = copy;
	// std::cout << "Copy constructor called for Intern" << std::endl;
}

Intern& Intern::operator=(const Intern &copy){
	(void)copy;
	// std::cout << "Copy assignement operator called for Intern" << std::endl;
	return *this;
}

Intern::~Intern(){
	// std::cout << "Destructor called for Intern" << std::endl;
}

AForm*	Intern::makeForm(const std::string& form, const std::string& target){
	std::string	formNames[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	AForm* forms[] = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
	};
	for (int i = 0; i < 3; i++){
		if (form == formNames[i]){
			std::cout << "Intern creates " << formNames[i] << std::endl;
			return forms[i];
		}
	}
	std::cout << "Intern can't create " << form << " form because it doesn't exit" << std::endl;
	return nullptr;
}