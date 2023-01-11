/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:59:59 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/12 14:38:23 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

template <typename T>
class Array
{
private:

	T*	_array;
	int	_size;

public:

	Array();
	Array(unsigned int n);
	Array(const Array<T>& other);
	Array& operator=(const Array<T>& other);
	T&	operator[](int index);
	~Array();

	unsigned int	size(void) const;

};

# include "Array.tpp"