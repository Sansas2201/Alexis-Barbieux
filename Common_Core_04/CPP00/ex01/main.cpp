/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:24:53 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/13 09:30:24 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	book;
	std::string	input = "";

	std::cout << "-------------PhoneBook-------------" << std::endl;
	std::cout << "ADD : save a new contact" << std::endl;
	std::cout << "SEARCH : display a specific contact" << std::endl;
	std::cout << "EXIT" << std::endl;
	std::cout << "-----------------------------------\n";
	while (input.compare("EXIT")){
		if (!input.compare("ADD")){
			book.addContact();
		}
		if (!input.compare("SEARCH")){
			if (!book.isContact(0))
				std::cout << "You don't have any contact" << std::endl << "-----------------------------------" << std::endl;
			else
				book.searchContact();
		}
		getline(std::cin, input);
	}
	return (0);
}