/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:25:02 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/01 15:03:36 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::bits = 8;

Fixed::Fixed(void)
{
	fixpoint = 0;
}

Fixed::Fixed(const int i)
{
	fixpoint = i << bits;
}

Fixed::Fixed(const float f)
{
	fixpoint = std::roundf(f * (1 << bits));
}

Fixed::Fixed(const Fixed& other)
{
	this->operator= (other);
}

Fixed::~Fixed(void)
{
	
}

int	Fixed::getRawBits(void) const
{
	return this->fixpoint;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixpoint = raw;
}

float	Fixed::toFloat(void) const
{
	return (float) this->fixpoint / (1 << bits);
}

int	Fixed::toInt(void) const
{
	return (int) this->fixpoint >> bits;
}

std::ostream& operator << (std::ostream& os, const Fixed& other)
{
	return os << other.toFloat();
}

bool Fixed::operator == (const Fixed& other)
{
	return this->fixpoint == other.fixpoint;
}

bool Fixed::operator != (const Fixed& other)
{
	return !(this->fixpoint == other.fixpoint);
}

bool Fixed::operator > (const Fixed& other)
{
	return this->fixpoint > other.fixpoint;
}

bool Fixed::operator < (const Fixed& other)
{
	return this->fixpoint < other.fixpoint;
}

bool Fixed::operator >= (const Fixed& other)
{
	return this->fixpoint >= other.fixpoint;
}

bool Fixed::operator <= (const Fixed& other)
{
	return this->fixpoint <= other.fixpoint;
}

Fixed	Fixed::operator + (const Fixed& other)
{
	return Fixed(this->fixpoint + other.fixpoint);
}

Fixed	Fixed::operator - (const Fixed& other)
{
	return Fixed(this->fixpoint - other.fixpoint);
}

Fixed	Fixed::operator * (const Fixed& other)
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator / (const Fixed& other)
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed&	Fixed::operator ++(void)
{
	this->fixpoint = this->fixpoint + 1;
	return *this;
}

Fixed	Fixed::operator ++(int)
{
	Fixed temp = *this;

	this->fixpoint = this->fixpoint + 1;
	return	temp;
}

Fixed&	Fixed::operator --()
{
	this->fixpoint = this->fixpoint - 1;
	return *this;
}

Fixed	Fixed::operator --(int)
{
	Fixed temp = *this;

	this->fixpoint = this->fixpoint - 1;
	return	temp;
}

Fixed& Fixed::min(Fixed& fix1, Fixed& fix2)
{
	if (fix1.fixpoint < fix2.fixpoint) {
		return fix1;
	}
	return fix2;
}

const Fixed& Fixed::min(const Fixed& fix1, const Fixed& fix2)
{
	if (fix1.fixpoint < fix2.fixpoint) {
		return fix1;
	}
	return fix2;
}

Fixed& Fixed::max(Fixed& fix1, Fixed& fix2)
{
	if (fix1.fixpoint > fix2.fixpoint) {
		return fix1;
	}
	return fix2;
}

const Fixed& Fixed::max(const Fixed& fix1, const Fixed& fix2)
{
	if (fix1.fixpoint > fix2.fixpoint) {
		return fix1;
	}
	return fix2;
}