/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarbieu <abarbieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 08:59:34 by abarbieu          #+#    #+#             */
/*   Updated: 2023/11/22 10:12:30 by abarbieu         ###   ########.fr       */
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

//-----------------------Comparaison operator---------------------------------//

bool	Fixed::operator>(const Fixed &fixed) const{
	return this->getRawBits() > fixed.getRawBits();
}

bool	Fixed::operator<(const Fixed &fixed) const{
	return this->getRawBits() < fixed.getRawBits();
}

bool	Fixed::operator>=(const Fixed &fixed) const{
	return this->getRawBits() >= fixed.getRawBits();
}

bool	Fixed::operator<=(const Fixed &fixed) const{
	return this->getRawBits() <= fixed.getRawBits();
}

bool	Fixed::operator==(const Fixed &fixed) const{
	return this->getRawBits() == fixed.getRawBits();
}

bool	Fixed::operator!=(const Fixed &fixed) const{
	return this->getRawBits() != fixed.getRawBits();
}

//------------------------Arithmetic operator-------------------------------//

Fixed	Fixed::operator+(const Fixed &fixed) const{
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed	Fixed::operator-(const Fixed &fixed) const{
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed	Fixed::operator*(const Fixed &fixed) const{
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator/(const Fixed &fixed) const{
	return Fixed(this->toFloat() / fixed.toFloat());
}

//------------------------Increment/Decrement operator-----------------------//

Fixed&	Fixed::operator++(void){
	++this->fixed_point;
	return *this;
}

Fixed	Fixed::operator++(int){
	Fixed tmp(*this);
	tmp.fixed_point = this->fixed_point++;
	return tmp;
}

Fixed&	Fixed::operator--(void){
	--this->fixed_point;
	return *this;
}

Fixed	Fixed::operator--(int){
	Fixed tmp(*this);
	tmp.fixed_point = this->fixed_point--;
	return tmp;
}

//-----------------------------Min/Max function-------------------------------------//

Fixed& Fixed::min(Fixed &f1, Fixed &f2){
	if (f1.getRawBits() < f2.getRawBits())
		return f1;
	return f2;
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2){
	if (f1.getRawBits() < f2.getRawBits())
		return f1;
	return f2;
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2){
	if (f1.getRawBits() > f2.getRawBits())
		return f1;
	return f2;
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2){
	if (f1.getRawBits() > f2.getRawBits())
		return f1;
	return f2;
}