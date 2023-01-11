/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:05:26 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/11 14:16:37 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void) {
	std::string	strCase[4] = {
		"one",
		"two",
		"three", 
		"four"
	};

	int		intCase[4] = { 1, 7, 12, 0 };
	double	doubleCase[4] = { 1.2, 4.6, 2.7, 7.8 };

	iter(strCase, 4, print);
	iter(intCase, 4, print);
	iter(doubleCase, 4, print);
	
	iter(strCase, 4, plus);
	iter(intCase, 4, plus);
	iter(doubleCase, 4, plus);

	for (int i = 0; i < 4; i++) {
		std::cout << strCase[i] << std::endl;
	}
	
	for (int i = 0; i < 4; i++) {
		std::cout << intCase[i] << std::endl;
	}

	for (int i = 0; i < 4; i++) {
		std::cout << doubleCase[i] << std::endl;
	}

	return 0;
}