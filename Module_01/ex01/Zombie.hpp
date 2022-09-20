/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:07:42 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/16 16:50:02 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);

	void		announce(void);
	void		SetName(std::string name);
private:
	std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif