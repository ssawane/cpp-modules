/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:25:02 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/28 15:37:44 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	fixpoint = 0;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	fixpoint = i << bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	fixpoint = std::roundf(f * (1 << bits));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->operator= (other);
}

Fixed& Fixed::operator = (const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		setRawBits(other.getRawBits());
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
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