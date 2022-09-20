/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:00:05 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/17 16:38:03 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
