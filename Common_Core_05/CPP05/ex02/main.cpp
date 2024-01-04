/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:05:12 by abarbieu          #+#    #+#             */
/*   Updated: 2024/01/03 14:41:26 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(){
	try{
		std::cout << "John" << std::endl;
		Bureaucrat	John("john", 50);
		ShrubberyCreationForm	form1("home");
		std::cout << John;
		std::cout << form1;
		John.signForm(form1);
		John.executeForm(form1);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
//------------------------------------------//
	try{
		std::cout << "Jane" << std::endl;
		Bureaucrat	Jane("jane", 73);
		RobotomyRequestForm	form2("bender");
		std::cout << Jane;
		std::cout << form2;
		Jane.signForm(form2);
		Jane.executeForm(form2);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
//------------------------------------------//
	try{
		std::cout << "Johnny" << std::endl;
		Bureaucrat	Johnny("johnny", 45);
		RobotomyRequestForm	form3("bender");
		std::cout << Johnny;
		std::cout << form3;
		Johnny.signForm(form3);
		Johnny.executeForm(form3);
		Johnny.executeForm(form3);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
//------------------------------------------//
	try{
		std::cout << "George" << std::endl;
		Bureaucrat	George("george", 1);
		PresidentialPardonForm	form4("Joseph");
		std::cout << George;
		std::cout << form4;
		George.signForm(form4);
		George.executeForm(form4);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
}
