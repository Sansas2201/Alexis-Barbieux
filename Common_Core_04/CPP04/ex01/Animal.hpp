/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:39:55 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/23 08:45:33 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(const Animal &animal);
	Animal& operator=(const Animal &animal);
	virtual ~Animal();

	std::string	getType() const;
	virtual void	makeSound() const;
};

#endif