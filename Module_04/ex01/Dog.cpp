/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:07:45 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/11 12:40:34 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "dog";
	dbrain = new Brain();
}

Dog::Dog(const Dog &other) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
	this->dbrain = other.dbrain;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->type = other.type;

	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete dbrain;
}

void	Dog::makeSound() const {
	std::cout << "Baarrkk!" << std::endl;
}

Brain	*Dog::getBrain() {
	return dbrain;
}