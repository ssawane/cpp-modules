/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:55:05 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/10 11:23:52 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() 
{
	{	
		const Animal	*meta = new Animal();
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << meta->getType() << " " << std::endl;

		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
		delete j;

		std::cout << std::endl;
	}
	{	
		const WrongAnimal	*wa = new WrongAnimal();
		const WrongAnimal	*wc = new WrongCat();

		std::cout << wa->getType() << " " << std::endl;
		std::cout << wc->getType() << " " << std::endl;

		wa->makeSound();
		wc->makeSound();

		delete wa;
		delete wc;
	}
	return 0;
}