/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:17:48 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/11 18:15:05 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "cat";
	cbrain = new Brain();
}

Cat::Cat(const Cat &other) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->type = other.type;
	this->cbrain = other.cbrain;

	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete cbrain;
}

void	Cat::makeSound() const {
	std::cout << "Meeoowww!" << std::endl;
}
