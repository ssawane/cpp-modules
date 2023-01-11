/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:55:05 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/11 18:12:24 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main() 
{
	const AAnimal	*i = new Dog();
	const AAnimal	*k = new Cat();

	i->makeSound();
	k->makeSound();
	
	delete i;
	delete k;
	
	return 0;
}