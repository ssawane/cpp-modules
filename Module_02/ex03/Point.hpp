/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:46:20 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/02 21:32:43 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
public:

	Point();
	~Point();
	Point(const float x, const float y);
	Point(const Point& other);
	Point& operator=(const Point& other);

	float	getX() const;
	float	getY() const;

private:

	const Fixed	x;
	const Fixed	y;

};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif