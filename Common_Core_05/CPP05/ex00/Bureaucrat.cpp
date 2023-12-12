/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:06:48 by abarbieu          #+#    #+#             */
/*   Updated: 2023/12/12 11:39:06 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string inst_name, int inst_grade): name(inst_name), grade(inst_grade){
	// std::cout << "Constructor called for Bureaucrat" << std::endl;
	if (1 > inst_grade)
		throw Bureaucrat::GradeTooHighException();
	else if (150 < inst_grade)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
	*this = copy;
	// std::cout << "Copy constructor called for Bureaucrat" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &copy){
	name = copy.name;
	grade = copy.grade;
	// std::cout << "Copy assignement operator called for Bureaucrat" << std::endl;
	return *this;
}


Bureaucrat::~Bureaucrat(){
	// std::cout << "Destructor called for Bureaucrat" << std::endl;
}

//----------------------Getters----------------------------//

std::string	Bureaucrat::getName() const{
	return this->name;
}

int	Bureaucrat::getGrade() const{
	return this->grade;
}

//----------------------Incr-Decr-----------------------//

void	Bureaucrat::GradeIncr(){
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void	Bureaucrat::GradeDecr(){
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

//-------------------Operator Overload------------------//

std::ostream& operator<<(std::ostream& o, const Bureaucrat& copy){
	o << copy.getName() << ", bureaucrat grade " << copy.getGrade() << std::endl;
	return o;
}