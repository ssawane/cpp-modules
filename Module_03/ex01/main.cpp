/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:12:11 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/07 16:43:25 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	tony("Tony");
	ScavTrap	mark("Mark");
	ScavTrap	john("John");

	mark.attack(john.getName());
	john.takeDamage(mark.getDmg());
	john.beRepaired(3);
	mark.guardGate();
	mark.printInfo();
	john.printInfo();
	tony.printInfo();
	
	return 0;
}