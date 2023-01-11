/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:50:15 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/08 19:45:30 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void) {
	int		random = std::rand() % 3;

	switch (random)
	{
	case 0:
		return new A;
	case 1:
		return new B;
	case 2:
		return new C;
	default:
		break;
	}
	return NULL;
}

void	identity(Base* p) {
	std::cout << "Identity by Base*: ";
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	}	
}

void	identity(Base& p) {
	std::cout << "Identity by Base&: ";
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast) {}
}

int	main(void) {
	std::srand(std::time(nullptr));

	Base*	b[5];
	Base&	a1 = *generate();
	Base&	a2 = *generate();
	Base&	a3 = *generate();
	Base&	a4 = *generate();
	Base&	a5 = *generate();

	for (int i = 0; i < 5; i++) {
		b[i] = generate();
		identity(b[i]);
	}
	std::cout << std::endl;

	identity(a1);
	identity(a2);
	identity(a3);
	identity(a4);
	identity(a5);

	for (int i = 0; i < 5; i++) {
		delete b[i];
	}

	delete &a1;
	delete &a2;
	delete &a3;
	delete &a4;
	delete &a5;
}