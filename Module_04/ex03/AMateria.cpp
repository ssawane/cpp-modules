/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:34:33 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/13 22:43:13 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type(NULL) {}

AMateria::AMateria(std::string const &type) : type(type) {}

std::string const	&AMateria::getType() const {
	return type;
}

AMateria::~AMateria() {}

void	AMateria::use(ICharacter &target) {
	std::cout << "Default AMateria's use function to " << target.getName() << std::endl;
}