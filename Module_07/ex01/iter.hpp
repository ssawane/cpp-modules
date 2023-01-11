/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:11:10 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/11 14:15:34 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void	iter(T arr[], size_t len, void (*foo)(T&)) {
	for (size_t i = 0; i < len; i++) {
		foo(arr[i]);
	}
}

template <typename T>
void	plus(T& a) {
	 a += 5;
}

template <>
void	plus<std::string>(std::string& a) {
	a += "_plus_5";
}

template <typename T>
void	print(T& a) {
	std::cout << "Print function for " << a << std::endl;
}