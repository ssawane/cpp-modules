/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:06:39 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/17 16:23:05 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);

	void		attack(void) const;
	void		setWeapon(Weapon &weapon);
private:
	std::string	name;
	Weapon		*weapon;
};

#endif