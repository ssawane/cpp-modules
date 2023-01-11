/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:12:27 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/08 22:28:04 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap& operator=(const ClapTrap &other);
	~ClapTrap();

	std::string getName() const;
	int			getDmg() const;
	int			getHp() const;
	int			getEp() const;
	void		setName(const std::string name);
	void		setDmg(int value);
	void		setHp(int value);
	void		setEp(int value);
	void		attack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		printInfo() const;

protected:

	std::string	name;
	int			hp;
	int			ep;
	int			dmg;

};

#endif
