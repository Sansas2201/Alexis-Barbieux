/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:05:43 by abarbieu          #+#    #+#             */
/*   Updated: 2023/12/12 11:23:29 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	std::string	name;
	int	grade;
	Bureaucrat();
public:
	Bureaucrat(std::string inst_name, int inst_grade);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& copy);
	~Bureaucrat();

	std::string	getName() const;
	int	getGrade() const;

	void	GradeIncr();
	void	GradeDecr();

	class GradeTooHighException : public std::exception{
		public:
			virtual const char* what() const throw(){ return "Grade too high"; }
	};

	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw(){ return "Grade too low";}
	};
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& copy);

#endif