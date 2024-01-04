/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:01:35 by abarbieu          #+#    #+#             */
/*   Updated: 2024/01/03 10:02:22 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
protected:
	const std::string _name;
	bool	_signed;
	const int	_sign_grade;
	const int	_exec_grade;
	AForm();
public:
	AForm(std::string name, int sign_grade, int exec_grade);
	AForm(const AForm& copy);
	AForm& operator=(const AForm& copy);
	~AForm();

	std::string getName() const;
	bool	getSigned() const;
	int	getSignGrade() const;
	int	getExecGrade() const;

	void	beSigned(const Bureaucrat& bureaucrat);
	virtual void	execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception{
	public:
		virtual const char* what() const throw(){ return "Form: Grade too high" ;}
	};

	class GradeTooLowException : public std::exception{
	public:
		virtual const char* what() const throw(){ return "Form: Grade too low" ;}
	};

	class NotSignedException : public std::exception{
		public:
			virtual const char* what() const throw(){ return "Form: Not signed" ;}
	};
};

std::ostream& operator<<(std::ostream& o, const AForm& copy);

#endif