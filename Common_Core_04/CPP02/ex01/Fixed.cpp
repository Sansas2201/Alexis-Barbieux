/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:14:11 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/22 08:44:45 by abarbieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(const int n): fixed_point(n << bits){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n): fixed_point(std::roundf(n * (1 << bits))){
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}
Fixed&	Fixed::operator=(const Fixed &fixed){
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &fixed)
		this->fixed_point = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	return this->fixed_point;
}

void Fixed::setRawBits(int const raw){
	this->fixed_point = raw;
}

float	Fixed::toFloat() const{
	return static_cast<float>(this->getRawBits()) / (1 << bits);
}

int	Fixed::toInt() const{
	return this->fixed_point >> bits;
}

std::ostream & operator<<(std::ostream & o, Fixed const &i){
	o << i.toFloat();
	return o;
}
