/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:12:44 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/06 12:50:31 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hp(10), ep(10), dmg(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), ep(10), dmg(0) {
	std::cout << name <<"'s constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hp(other.hp), ep(other.ep), dmg(other.dmg) {
	std::cout << name << "'s copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
	std::cout << this->name << "'s copy assignment operator called" << std::endl;
	this->name = other.name;
	this->hp = other.hp;
	this->ep = other.ep;
	this->dmg = other.dmg;

	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << name <<"'s destructor called" << std::endl;
}

std::string	ClapTrap::getName() const {
	return name;
}

int	ClapTrap::getDmg() const {
	return dmg;
}

void ClapTrap::attack(const std::string &target) {
	if (hp <= 0) {
		std::cout << "ClapTrap " << name
			<< " cannot attack, cause he is dead." << std::endl;
		return ;
	}
	if (ep > 0) {
		ep--;
		std::cout << "ClapTrap " << name << " attacks " << target
			<< ", causing " << dmg << " points of damage!" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << name
			<< " cannot attack, cause he has no energy points." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hp <= 0) {
		std::cout << "ClapTrap " << name << " is dead already." << std::endl;
		return ;
	}
	else {
		hp -= amount;
		std::cout << "ClapTrap " << name << " took " 
			<< amount << " points of damage!" << std::endl;
		if (hp < 0) {
			hp = 0;
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hp <= 0) {
		std::cout << "ClapTrap " << name
			<< " cannot be repaired, cause he is dead already." << std::endl;
		return ;
	}
	else {
		if (ep > 0) {
			ep--;
			hp += amount;
			std::cout << "ClapTrap " << name << " repaired "
				<< amount << " hit points!" << std::endl;
		}
		else {
			std::cout << "ClapTrap " << name
				<< " cannot be repaired, cause he has no energy points." << std::endl;
		}
	}
}

void ClapTrap::printInfo() const {
	std::cout << "ClapTrap " << name << " has " << hp << " hit points and "
		<< ep << " energy points. Damage value: " << dmg << std::endl;
}
