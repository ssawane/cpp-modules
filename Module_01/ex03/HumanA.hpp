/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 23:51:07 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/17 16:38:26 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);

	void		attack(void) const;
private:
	std::string	name;
	Weapon		&weapon;
};

#endif
