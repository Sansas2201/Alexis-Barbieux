/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:14:19 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/22 08:30:39 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					fixed_point;
	static const int	bits = 8;
public:
	Fixed();
	Fixed(const int fixed_point);
	Fixed(const float fixed_point);
	Fixed(const Fixed &fixed);
	Fixed& operator=(const Fixed &fixed);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream &o, Fixed const &i);

#endif