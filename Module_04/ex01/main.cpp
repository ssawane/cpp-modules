/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:55:05 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/11 12:51:16 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main() 
{
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	delete j;
	delete i;

	int		length = 10;
	Animal	*a[length];

	for (int i = 0; i < length; i++) {
		if (i < length/2) {
			a[i] = new Dog();
		}
		else {
			a[i] = new Cat();
		}
		a[i]->makeSound();
	}
	
	for (int i = 0; i < length; i++) {
		delete a[i];
	}

	std::cout << std::endl;

	Dog *d = new Dog();

	d->getBrain()->setIdeas("Dog's idea");
	for (int i = 0; i < d->getBrain()->getLength(); i++) {
		std::cout << d->getBrain()->getIdeas()[i] << std::endl;
	}

	delete d;
	
	return 0;
}