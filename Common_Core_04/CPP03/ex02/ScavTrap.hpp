/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:59:34 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/22 12:47:59 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
public:
	ScavTrap();
	ScavTrap(std::string st_name);
	ScavTrap(const ScavTrap &st);
	ScavTrap& operator=(const ScavTrap &st);
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();
};

#endif