/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:28:29 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/16 12:35:05 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int N) : N(N) {}

Span::Span(const Span& other) : mySet(other.mySet), N(other.N) {}

Span& Span::operator=(const Span& other) {
	if (this != &other) {
		this->N = other.N;
		this->mySet = other.mySet;
	}

	return *this;
}

Span::~Span() {}

void	Span::addNumber(const int& val) {
	std::set<int>::iterator it = mySet.find(val);
	if (it == mySet.end()) {
		if (N > 0) {
			mySet.insert(val);
			N--;
		}
		else {
			throw std::runtime_error("Span is full");
		}
	}
	else {
		throw std::runtime_error("Value is already in Span");
	}
}


void	Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	if (N >= std::distance(start, end)) {
		mySet.insert(start, end);
		N -= std::distance(start, end); 
	}
	else {
		throw std::runtime_error("Span is full");
	}
}

int	Span::shortestSpan(void) const {
	int	res = INT_MAX;
	int	prev = *mySet.begin();

	if (mySet.size() < 2) {
		throw std::runtime_error("Less than 2 elements in Span");
	}
	else {
		for (std::set<int>::iterator it = std::next(mySet.begin()); it != mySet.end(); ++it) {
			if (abs(*it - prev) < res) {
				res = abs(*it - prev);
			}
			prev = *it;
		}
		return res;
	}
}

int	Span::longestSpan(void) const {
	int	_min;
	int	_max;

	if (mySet.size() < 2) {
		throw std::runtime_error("Less than 2 elements in Span");
	}
	else {
		_min = *std::min_element(std::begin(mySet), std::end(mySet));
		_max = *std::max_element(std::begin(mySet), std::end(mySet));
		return _max - _min;
	}
}

void	Span::displaySpan(void) {
	for (std::set<int>::iterator it = begin(mySet); it != end(mySet); ++it) {
		std::cout << *it << std::endl;
	}
}
