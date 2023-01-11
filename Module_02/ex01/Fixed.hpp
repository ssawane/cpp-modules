/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:25:26 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/28 08:58:41 by ssawane          ###   ########.fr       */
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
	Fixed(const int val);
	Fixed(const float val);
	Fixed(const Fixed& other);
	Fixed& operator = (const Fixed& other);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int					fixpoint;
	static const int	bits;
	
};

std::ostream& operator << (std::ostream& os, const Fixed& other);

#endif