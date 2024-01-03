/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:17:45 by abarbieu          #+#    #+#             */
/*   Updated: 2024/01/03 13:45:36 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(){
	ClapTrap	john("John");

	std::cout << "ClapTrap John encountered a Monster" << std::endl;
	john.attack("Monster");
	john.takeDamage(4);
	john.beRepaired(6);
	john.takeDamage(15);
}