/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:09:41 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/07 19:59:38 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data* ptr) {
	uintptr_t	res = reinterpret_cast<uintptr_t>(ptr);

	return res;
}

Data*	deserialize(uintptr_t raw) {
	Data*	res = reinterpret_cast<Data*>(raw);

	return res;
}

int	main(void) {
	Data*		_data = new Data;
	
	uintptr_t	_uint = serialize(_data);

	std::cout << "Original address: " << _data << std::endl;
	std::cout << "Address by deserealize: " << deserialize(_uint) << std::endl;

	delete _data;
}