/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:27:56 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/16 12:34:55 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <climits>

class Span
{
private:
	
	std::set<int>	mySet;
	unsigned int	N;

public:

	Span();
	Span(unsigned int N);
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span();

	void	addNumber(const int& val);
	void	addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
	int		shortestSpan(void) const;
	int		longestSpan(void) const;
	void	displaySpan(void);
};
