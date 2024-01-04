/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:01:59 by abarbieu          #+#    #+#             */
/*   Updated: 2024/01/03 09:53:06 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string name, int sign_grade, int exec_grade): _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade){
	// std::cout << "Constructor called for AForm" << std::endl;
	_signed = false;
	if (1 > _sign_grade || 1 > _exec_grade)
		throw AForm::GradeTooHighException();
	else if (150 < _sign_grade || 150 < _exec_grade)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &copy): _name(copy.getName()), _signed(copy.getSigned()), _sign_grade(copy.getSignGrade()), _exec_grade(copy.getExecGrade()){
	// std::cout << "Copy constructor called for AForm" << std::endl;
}

AForm& AForm::operator=(const AForm &copy){
	if (this != &copy)
		_signed = copy.getSigned();
	// std::cout << "Copy assignement operator called for AForm" << std::endl;
	return *this;
}

AForm::~AForm(){
	// std::cout << "Destructor called for AForm" << std::endl;
}

//----------------------Getters----------------------------//

std::string	AForm::getName() const{
	return this->_name;
}

bool	AForm::getSigned() const{
	return this->_signed;
}

int	AForm::getSignGrade() const{
	return this->_sign_grade;
}

int	AForm::getExecGrade() const{
	return this->_exec_grade;
}

//------------------------Be Signed----------------------//

void	AForm::beSigned(const Bureaucrat& bureaucrat){
	if (bureaucrat.getGrade() <= this->getSignGrade())
		this->_signed = true;
	else
		throw GradeTooLowException();
}

//-------------------Operator Overload------------------//

std::ostream& operator<<(std::ostream& o, const AForm& copy){
	o << copy.getName() << ", form signed : " << copy.getSigned() << ", grade required to sign : " << copy.getSignGrade() << ", grade required to execute : " << copy.getExecGrade() << std::endl;
	return o;
}