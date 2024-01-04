/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:09:13 by abarbieu          #+#    #+#             */
/*   Updated: 2024/01/03 12:29:11 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm("PresidentialPardonForm", 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): AForm(copy), _target(copy._target){
	// std::cout << "Copy constructor called for PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &copy){
	(void)copy;
	// std::cout << "Copy assignement operator called for PresidentialPardonForm" << std::endl;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	// std::cout << "Destructor called for PresidentialPardonForm" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (this->getSigned() == false)
		throw NotSignedException();
	else if (this->getExecGrade() < executor.getGrade())
		throw GradeTooLowException();
	std::cout << _target << " has been pardonned by Zaphod Beeblebrox" << std::endl;
}