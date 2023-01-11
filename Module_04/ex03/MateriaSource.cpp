/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:08:05 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/14 12:18:48 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource() : mem() {}

MateriaSource::MateriaSource(const MateriaSource &other) {
	for (int i = 0; i < 4; i++) {
		if (other.mem[i]) {
			this->mem[i] = other.mem[i]->clone();
		}
		else {
			this->mem[i] = NULL;
		}
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other) {
	if (this != &other) {
		for (int i = 0; i < 4; i++) {
			if (this->mem[i]) {
				delete this->mem[i];
			}
			this->mem[i] = NULL;
			if (other.mem[i]) {
				this->mem[i] = other.mem[i]->clone();
			}
		}
	}

	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (mem[i] != NULL)
			delete mem[i];
	}
}

void	MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (mem[i] == NULL) {
			this->mem[i] = m;
			break ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 3; i >= 0; i--) {
		if (mem[i] != NULL) {
			if (mem[i]->getType() == type) {
				return mem[i]->clone();
			}
		}
	}
	return 0;
}