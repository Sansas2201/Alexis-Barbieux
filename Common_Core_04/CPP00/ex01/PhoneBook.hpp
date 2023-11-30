/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:46:02 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/13 09:28:50 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contact[8];
	int		last_contact;
	const char	*putInfo[5];
public:
	PhoneBook(void);
	~PhoneBook(void);

	int		isContact(int index);
	void	addContact(void);
	void	searchContact(void);
};


#endif