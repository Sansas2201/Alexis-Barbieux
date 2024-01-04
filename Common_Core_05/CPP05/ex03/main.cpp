/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:05:12 by abarbieu          #+#    #+#             */
/*   Updated: 2024/01/03 14:43:47 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(){

	Intern someRandomIntern;
	AForm* scf;
	AForm* rrf;
	AForm* ppf;
	AForm* def;
	scf = someRandomIntern.makeForm("shrubbery creation", "home");
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	ppf = someRandomIntern.makeForm("presidential pardon", "Joseph");
	def = someRandomIntern.makeForm("random", "random");
}
