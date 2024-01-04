/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 10:19:48 by abarbieu          #+#    #+#             */
/*   Updated: 2024/01/03 12:02:37 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("ShrubberyCreationForm", 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): AForm(copy), _target(copy._target){
	// std::cout << "Copy constructor called for ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy){
	(void)copy;
	// std::cout << "Copy assignement operator called for ShrubberyCreationForm" << std::endl;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	// std::cout << "Destructor called for AForm" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	std::ofstream	outfile;

	if (this->getSigned() == false)
		throw NotSignedException();
	else if (this->getExecGrade() < executor.getGrade())
		throw GradeTooLowException();
	outfile.open((std::string(this->_target) + "_shrubbery").c_str());
	if (outfile.fail())
		return ;
	outfile << "                      ___" << std::endl;
    outfile << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
    outfile << "             ,-'          __,,-- \\" << std::endl;
    outfile << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
    outfile << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
    outfile << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
    outfile << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
    outfile << "     (     ,-'                  `." << std::endl;
    outfile << "      `._,'     _   _             ;" << std::endl;
    outfile << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
    outfile << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
    outfile << "        `--\'   \"Hb  HH  dF\"" << std::endl;
    outfile << "                \"Hb HH dF" << std::endl;
    outfile << "                 \"HbHHdF" << std::endl;
    outfile << "                  |HHHF" << std::endl;
    outfile << "                  |HHH|" << std::endl;
    outfile << "                  |HHH|" << std::endl;
    outfile << "                  |HHH|" << std::endl;
    outfile << "                  |HHH|" << std::endl;
    outfile << "                  dHHHb" << std::endl;
    outfile << "                .dFd|bHb.               o" << std::endl;
    outfile << "      o       .dHFdH|HbTHb.          o /" << std::endl;
    outfile << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
    outfile << "##########################################" << std::endl;
	outfile.close();
}