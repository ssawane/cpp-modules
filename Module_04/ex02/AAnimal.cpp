/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:55:14 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/11 18:14:05 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("notype") {
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : type(other.type) {
	std::cout << "AAnimal copy constructor called, type: " << type << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
	type = other.type;
	std::cout << "AAnimal copy assignment operator called, type: " << type << std::endl;

	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called, type: " << type << std::endl;
}

std::string	AAnimal::getType() const {
	return type;
}