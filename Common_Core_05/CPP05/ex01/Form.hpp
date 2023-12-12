/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:01:35 by abarbieu          #+#    #+#             */
/*   Updated: 2023/12/12 13:54:34 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form{
private:
	const std::string _name;
	bool	_signed = false;
	const int	_sign_grade;
	const int	_exec_grade;
	Form();
public:
	Form(std::string name, int sign_grade, int exec_grade);
	Form(const Form& copy);
	Form& operator=(const Form& copy);
	~Form();

	std::string getName();
	bool	getSigned();
	int	getSignGrade();
	int	getExecGrade();

	void	beSigned(const Bureaucrat& bureaucrat);

	class GradeTooHighException : public std::exception{
	public:
		virtual const char* what() const throw(){ return "Form: Grade too high" ;}
	};

	class GradeTooLowException : public std::exception{
	public:
		virtual const char* what() const throw(){ return "Form: Grade too low" ;}
	};
};

std::ostream& operator<<(std::ostream& o, const Form& copy);

#endif