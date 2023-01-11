/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:12:11 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/09 12:27:24 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	john("John");
	DiamondTrap	andrew("Andrew");

	john.printInfo();
	andrew.printInfo();
	std:: cout << std::endl;

	for(int i = 0; i < 5; i++) {
		john.ClapTrap::attack(andrew.getName());
		andrew.takeDamage(john.getDmg());
	}
	andrew.beRepaired(3);
	std:: cout << std::endl;
	
	andrew.attack();
	andrew.whoAmI();
	std:: cout << std::endl;
	
	john.printInfo();
	andrew.printInfo();

	return 0;
}