/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:49:02 by abarbieu          #+#    #+#             */
/*   Updated: 2024/01/03 13:28:18 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): AForm("RobotomyRequestForm", 72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): AForm(copy), _target(copy._target){
	// std::cout << "Copy constructor called for RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &copy){
	(void)copy;
	// std::cout << "Copy assignement operator called for RobotomyRequestForm" << std::endl;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	// std::cout << "Destructor called for RobotomyRequestForm" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (this->getSigned() == false)
		throw NotSignedException();
	else if (this->getExecGrade() < executor.getGrade())
		throw GradeTooLowException();
	static int	i = 0;
	if (i % 2)
		std::cout << "BZZZT ! " << _target << " has been robotomized !" << std::endl;
	else
		std::cout << "Robotomy failed ! " << _target << " hasn't been robotomized !" << std::endl;
	i++;
}