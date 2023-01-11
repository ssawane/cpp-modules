/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:12:11 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/07 17:46:34 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	tony("Tony");
	ScavTrap	mark("Mark");
	FragTrap	john("John");

	mark.attack(john.getName());
	john.takeDamage(mark.getDmg());
	john.beRepaired(3);

	mark.guardGate();
	john.highFivesGuys();

	for(int i = 0; i < 10; i++) {
		john.attack(mark.getName());
		mark.takeDamage(john.getDmg());
	}

	mark.printInfo();
	john.printInfo();
	tony.printInfo();
	
	return 0;
}