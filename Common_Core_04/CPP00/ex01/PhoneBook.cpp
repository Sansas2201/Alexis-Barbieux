/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:18:34 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/13 11:10:58 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	//std::cout << "Constructor called\n";
	this->last_contact = -1;
	this->putInfo[0] = "First Name: ";
	this->putInfo[1] = "Last Name: ";
	this->putInfo[2] = "Nickname: ";
	this->putInfo[3] = "Phone Number: ";
	this->putInfo[4] = "Darkest Secret: ";
	return ;
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "Destructor called\n";
}

static int	isStrSpace(std::string info)
{
	for (unsigned long i = 0; i < info.length(); i++)
		if (!isspace(info[i]))
			return (0);
	return (1);
}

int		PhoneBook::isContact(int index)
{
	if (index > 7)
		return (0);
	if (this->contact[index].getInfo(1).empty())
		return (0);
	return (1);
}

void	PhoneBook::addContact(void)
{
	std::string	info;

	if (this->last_contact == 7)
		this->last_contact = 0;
	else
		this->last_contact++;
	std::cout << "-----------------------------------" << std::endl << "Enter contact info" << std::endl;
	for (int index = 1; index < 6; index++){
		std::cout << this->putInfo[index - 1];
		getline(std::cin, info);
		if (!info.empty() && !isStrSpace(info))
			this->contact[this->last_contact].setInfo(index, info);
		else{
			std::cout << "Every info must be filled" << std::endl;
			index--;
		}
	}
	std::cout << "-----------------------------------" << std::endl;
}

void	PhoneBook::searchContact(void)
{
	std::string	input;
	int			ContactDisplay;

	std::cout << "-----------------------------------" << std::endl << "     index|first name| last name|  nickname" << std::endl;
	for (int index = 0; this->isContact(index); index++){
		for (int indexDisplay = 0; indexDisplay < 9; indexDisplay++)
			std::cout << " ";
		std::cout << index + 1 << "|";
		for (int indexInfo = 1; indexInfo < 4; indexInfo++){
			if (this->contact[index].getInfo(indexInfo).length() > 10)
				std::cout << this->contact[index].getInfo(indexInfo).substr(0, 9) << ".";
			else{
				for (int i = this->contact[index].getInfo(indexInfo).length(); i < 10; i++)
					std::cout << " ";
				std::cout << this->contact[index].getInfo(indexInfo);
			}
			if (indexInfo < 3)
				std::cout << "|";
			else
				std::cout << std::endl;
		}
	}
	std::cout << "Wich contact do you want to display ? : ";
	getline(std::cin, input);
	ContactDisplay = input[0] - '0';
	if (input.empty() || isStrSpace(input) || input.length() != 1 || (ContactDisplay < 1 || 8 < ContactDisplay) || !this->isContact(ContactDisplay - 1)){
		std::cout << "You must put a number between 1 and the number of contact you have" << std::endl << "Return to command prompt" << std::endl << "-----------------------------------" << std::endl;
		return ;
	}
	std::cout << "First Name: " << this->contact[ContactDisplay - 1].getInfo(1) << std::endl << "Last Name: " << this->contact[ContactDisplay - 1].getInfo(2) << std::endl << "Nickname: " << this->contact[ContactDisplay - 1].getInfo(3) << std::endl << "Phone Number: " << this->contact[ContactDisplay - 1].getInfo(4) << std::endl << "Darkest Secret: " << this->contact[ContactDisplay - 1].getInfo(5) << std::endl << "-----------------------------------" << std::endl;
}