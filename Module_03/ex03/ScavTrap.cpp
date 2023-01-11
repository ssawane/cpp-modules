/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:16:39 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/09 13:07:14 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	setName("default");
	setHp(100);
	setEp(50);
	setDmg(20);
	epvalue = ep;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << name <<"'s ScavTrap constructor called" << std::endl;
	setHp(100);
	setEp(50);
	setDmg(20);
	epvalue = ep;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	setName(other.getName());
	setHp(other.getHp());
	setEp(other.getEp());
	setDmg(other.getDmg());
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
	std::cout << getName() <<"'s ScavTrap copy assignment operator called" << std::endl;
	setName(other.getName());
	setHp(other.getHp());
	setEp(other.getEp());
	setDmg(other.getDmg());

	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << getName() <<"'s ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack() {
	std::cout << "ScavTrap's attack function called" << std::endl;
}

int ScavTrap::getEpvalue() {
	return epvalue;
}