/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:07:53 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/08 17:30:04 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	setName("default");
	setHp(100);
	setEp(100);
	setDmg(30);
}

FragTrap::FragTrap(std::string name) {
	setName(name);
	std::cout << getName() <<"'s FragTrap constructor called" << std::endl;
	setHp(100);
	setEp(100);
	setDmg(30);
}

FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
	std::cout << getName() <<"'s FragTrap copy assignment operator called" << std::endl;
	setName(other.getName());
	setHp(other.getHp());
	setEp(other.getEp());
	setDmg(other.getDmg());

	return *this;
}

FragTrap::~FragTrap() {
	std::cout << getName() <<"'s FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << getName() << ", give me a five!" << std::endl;
}