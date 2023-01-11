/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:00:40 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/14 12:19:26 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("defaultName"), inv() {}

Character::Character(std::string name) : name(name), inv() {}

Character::Character(const Character &other) : name(other.name) {
	for (int i = 0; i < 4; i++) {
		if (other.inv[i]) {
			this->inv[i] = other.inv[i]->clone();
		}
		else {
			this->inv[i] = NULL;
		}
	}
}

Character& Character::operator=(const Character &other) {
	if (this != &other) {
		this->name = other.name;
		for (int i = 0; i < 4; i++) {
			if (this->inv[i]) {
				delete this->inv[i];
			}
			this->inv[i] = NULL;
			if (other.inv[i]) {
				this->inv[i] = other.inv[i]->clone();
			}
		}
	}
	
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (inv[i] != NULL) {
			delete inv[i];
		}
	}
}

std::string const &Character::getName() const {
	return this->name;
}

void	Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (inv[i] == NULL) {
			inv[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		inv[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4 && inv[idx]) {
		if (inv[idx]) {
			this->inv[idx]->use(target);
		}
	}
}
