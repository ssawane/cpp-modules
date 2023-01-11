/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:54:04 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/10 11:21:21 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("wrong_notype") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type) {
	std::cout << "WrongAnimal copy constructor called, type: " << type << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	type = other.type;
	std::cout << "WrongAnimal copy assignment operator called, type: " << type << std::endl;

	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called, type: " << type << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal makeSound" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return type;
}