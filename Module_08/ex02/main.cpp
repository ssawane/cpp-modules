/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:37:17 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/17 11:43:48 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main(void) {
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\n";

	/*-----------------------------------------------*/
	
	std::list<int> myList;

	myList.push_back(5);
	myList.push_back(17);

	std::cout << myList.back() << std::endl;

	myList.pop_back();

	std::cout << myList.size() << std::endl;

	myList.push_back(3);
	myList.push_back(5);
	myList.push_back(737);
	myList.push_back(0);

	std::list<int>::iterator _it = myList.begin();
	std::list<int>::iterator _ite = myList.end();

	++_it;
	--_it;
	while (_it != _ite) {
		std::cout << *_it << std::endl;
		++_it;
	}
	
	return 0;
}
