/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:05:12 by abarbieu          #+#    #+#             */
/*   Updated: 2023/12/12 11:55:44 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(){
	try{
		std::cout << "John" << std::endl;
		Bureaucrat	John("john", 50);
		std::cout << John;
		John.GradeIncr();
		std::cout << John;
		John.GradeDecr();
		John.GradeDecr();
		std::cout << John;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
//------------------------------------------//
	try{
		std::cout << "Jane" << std::endl;
		Bureaucrat	Jane("jane", 150);
		std::cout << Jane;
		Jane.GradeIncr();
		std::cout << Jane;
		Jane.GradeDecr();
		Jane.GradeDecr();
		std::cout << Jane;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
//------------------------------------------//
	try{
		std::cout << "Johnny" << std::endl;
		Bureaucrat	Johnny("johnny", 1);
		std::cout << Johnny;
		Johnny.GradeIncr();
		std::cout << Johnny;
		Johnny.GradeDecr();
		Johnny.GradeDecr();
		std::cout << Johnny;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
//------------------------------------------//
	try{
		std::cout << "George" << std::endl;
		Bureaucrat	George("george", -19);
		std::cout << George;
		George.GradeIncr();
		std::cout << George;
		George.GradeDecr();
		George.GradeDecr();
		std::cout << George;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
//------------------------------------------//
	try{
		std::cout << "Jonathan" << std::endl;
		Bureaucrat	Jonathan("jonathan", 242);
		std::cout << Jonathan;
		Jonathan.GradeIncr();
		std::cout << Jonathan;
		Jonathan.GradeDecr();
		Jonathan.GradeDecr();
		std::cout << Jonathan;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
}