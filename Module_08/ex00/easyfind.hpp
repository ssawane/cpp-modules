/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 20:35:37 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/13 22:01:48 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>

template <typename T>
int easyfind(T& cont, int value) {
	for (typename T::iterator it = cont.begin(); it != cont.end(); ++it) {
		if (*it == value) {
			return std::distance(cont.begin(), it);
		}
	}
	throw std::runtime_error("No such element");
}
