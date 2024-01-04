/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 08:31:40 by abarbieu          #+#    #+#             */
/*   Updated: 2023/12/05 08:39:28 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
public:
	Ice();
	Ice(const Ice& ice);
	Ice& operator=(const Ice& ice);
	~Ice();

	virtual AMateria* clone() const;
};

#endif