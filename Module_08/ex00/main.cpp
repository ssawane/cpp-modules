/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:24:27 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/13 23:23:58 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void) {
	std::vector<int>	myVec;

	myVec.push_back(3);
	myVec.push_back(45);
	myVec.push_back(21);
	myVec.push_back(64);
	myVec.push_back(21);
	myVec.push_back(9);

	std::cout << easyfind(myVec, 64) << std::endl;
	try {
		std::cout << easyfind(myVec, 8) << std::endl;
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}

	std::list<int>	myList;
	for (int i = 10; i < 18; i++) {
        myList.push_back(i);
    }
	std::cout << easyfind(myList, 12) << std::endl;

	return 0;
}