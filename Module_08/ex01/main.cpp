/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:27:39 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/16 12:47:07 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	std::srand(std::time(nullptr));
	
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try {
		sp.addNumber(121);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() <<std::endl << std::endl;
	}
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl << std::endl;

	Span sp2 = Span(10000);
	std::vector<int> tmp;

	for (int i = 0; i < 100; i++) {
		tmp.push_back(rand()%50000);
	}

	try {
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << std::endl << std::endl;
	}
	
	sp2.addRange(begin(tmp), end(tmp));
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl << std::endl;

	sp2.displaySpan();

	return 0;
}
