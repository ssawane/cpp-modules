/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:55:14 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/09 23:24:31 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("notype") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) {
	std::cout << "Animal copy constructor called, type: " << type << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
	type = other.type;
	std::cout << "Animal copy assignment operator called, type: " << type << std::endl;

	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called, type: " << type << std::endl;
}

void	Animal::makeSound() const {
	std::cout << "makeSound default" << std::endl;
}

std::string	Animal::getType() const {
	return type;
}