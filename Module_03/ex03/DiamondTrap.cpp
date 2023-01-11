/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:40:26 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/09 13:59:03 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = "default";
	ClapTrap::name = "default_clap_name";
	this->hp = FragTrap::getHp();
	this->ep = ScavTrap::getEpvalue();
	this->dmg = FragTrap::getDmg();
}

DiamondTrap::DiamondTrap(std::string name) {
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	std::cout << getName() <<"'s DiamondTrap constructor called" << std::endl;
	this->hp = FragTrap::getHp();
	this->ep = ScavTrap::getEpvalue();
	this->dmg = FragTrap::getDmg();
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other) {
	this->name = other.name;
	std::cout << getName() <<"'s DiamondTrap copy assignment operator called" << std::endl;
	setName(other.getName());
	setHp(other.getHp());
	setEp(other.getEp());
	setDmg(other.getDmg());

	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << getName() <<"'s DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI() const {
	std::cout << "My ClapTrap name is: " << getName() << std::endl
		<<  "My DiamondTrap name is: " << this->name << std::endl;
}

void DiamondTrap::attack() {
	ScavTrap::attack();
}
