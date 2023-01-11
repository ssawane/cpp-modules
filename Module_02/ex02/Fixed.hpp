/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:25:26 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/01 15:06:52 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
public:

	Fixed(void);
	~Fixed(void);
	Fixed(const int val);
	Fixed(const float val);
	Fixed(const Fixed& other);
	bool	operator == (const Fixed& other);
	bool	operator != (const Fixed& other);
	bool	operator > (const Fixed& other);
	bool	operator < (const Fixed& other);
	bool	operator >= (const Fixed& other);
	bool	operator <= (const Fixed& other);
	Fixed	operator + (const Fixed& other);
	Fixed	operator - (const Fixed& other);
	Fixed	operator * (const Fixed& other);
	Fixed	operator / (const Fixed& other);
	Fixed&	operator ++ (void);
	Fixed	operator ++ (int value);
	Fixed&	operator -- (void);
	Fixed	operator -- (int value);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;
	static Fixed&		min(Fixed& fix1, Fixed& fix2);
	static const Fixed&	min(const Fixed& fix1, const Fixed& fix2);
	static Fixed&		max(Fixed& fix1, Fixed& fix2);
	static const Fixed&	max(const Fixed& fix1, const Fixed& fix2);

private:

	int					fixpoint;
	static const int	bits;
	
};

std::ostream& operator << (std::ostream& os, const Fixed& other);

#endif