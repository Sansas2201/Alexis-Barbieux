/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 08:38:48 by abarbieu          #+#    #+#             */
/*   Updated: 2023/12/05 08:39:21 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
public:
	Cure();
	Cure(const Cure& ice);
	Cure& operator=(const Cure& ice);
	~Cure();

	virtual AMateria* clone() const;
};

#endif