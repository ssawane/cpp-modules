/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:02:32 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/13 22:44:28 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &other) : AMateria("ice") {
	*this = other;
}

Ice &Ice::operator=(const Ice &other) {
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

Ice::~Ice() {}

AMateria *Ice::clone() const {
	return new Ice();
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}