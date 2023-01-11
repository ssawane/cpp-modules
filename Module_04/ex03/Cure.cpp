/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:03:13 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/14 00:08:47 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &other) : AMateria("cure") {
	*this = other;
}

Cure &Cure::operator=(const Cure &other) {
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

Cure::~Cure() {}

AMateria *Cure::clone() const {
	return new Cure();
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
