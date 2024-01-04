/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:39:55 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/23 09:47:30 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
protected:
	std::string	type;
public:
	AAnimal();
	AAnimal(const AAnimal &animal);
	AAnimal& operator=(const AAnimal &animal);
	virtual ~AAnimal();

	std::string	getType() const;
	virtual void	makeSound() const = 0;
};

#endif