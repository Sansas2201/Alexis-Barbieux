/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:18:30 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/13 09:47:51 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	//std::cout << "Constructor called\n";
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
	return ;
}

Contact::~Contact(void)
{
	//std::cout << "Destructor called\n";
	return ;
}

void	Contact::setInfo(int index, std::string info)
{
	if (index == 1)
		this->first_name = info;
	if (index == 2)
		this->last_name = info;
	if (index == 3)
		this->nickname = info;
	if (index == 4)
		this->phone_number = info;
	if (index == 5)
		this->darkest_secret = info;
	return ;
}

std::string	Contact::getInfo(int index)
{
	if (index == 1)
		return this->first_name;
	if (index == 2)
		return this->last_name;
	if (index == 3)
		return this->nickname;
	if (index == 4)
		return this->phone_number;
	if (index == 5)
		return this->darkest_secret;
	return (NULL);
}