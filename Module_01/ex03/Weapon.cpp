/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:56:21 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/17 16:34:02 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon()
{
	
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string& Weapon::getType() const
{
	return this->type;
}
