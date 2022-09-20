/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:06:42 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/18 14:07:17 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
public:
	Weapon(std::string type);
	~Weapon();

	void				setType(std::string type);
	const std::string&	getType(void) const;
	
private:
	std::string	type;
};

#endif