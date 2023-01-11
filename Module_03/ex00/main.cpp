/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:12:11 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/06 11:06:06 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	mark("Mark");
	ClapTrap	john("John");

	mark.attack(john.getName());
	john.takeDamage(mark.getDmg());
	john.beRepaired(3);
	mark.printInfo();
	john.printInfo();
	
	return 0;
}