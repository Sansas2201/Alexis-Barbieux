/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:01:59 by abarbieu          #+#    #+#             */
/*   Updated: 2023/12/12 13:43:30 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int sign_grade, int exec_grade): _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade){
	// std::cout << "Constructor called for Form" << std::endl;
	if (1 > _sign_grade || 1 > _exec_grade)
		throw Form::GradeTooHighException();
	else if (150 < _sign_grade || 150 < _exec_grade)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &copy){
	*this = copy;
	// std::cout << "Copy constructor called for Form" << std::endl;
}

Form& Form::operator=(const Form &copy){
	name = copy.name;
	grade = copy.grade;
	// std::cout << "Copy assignement operator called for Form" << std::endl;
	return *this;
}


Form::~Form(){
	// std::cout << "Destructor called for Form" << std::endl;
}