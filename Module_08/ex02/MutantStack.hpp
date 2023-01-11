/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:37:51 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/17 11:38:18 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>
#include <list>

template<class T>
class MutantStack : public std::stack<T>
{
public:

	typedef typename std::stack<T>::container_type::iterator	iterator;

	MutantStack() : std::stack<T>() {};
	MutantStack(const MutantStack<T>& other) : std::stack<T>(other) {};
	MutantStack& operator=(const MutantStack<T>& other) {
		if (*this != other) {
			this->c = other.c;
		}
		return *this;
	};
	~MutantStack() {};

	iterator begin(void) {
		return this->c.begin();
	};

	iterator end(void) {
		return this->c.end();
	};
};
