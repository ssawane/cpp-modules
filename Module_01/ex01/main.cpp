/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:07:24 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/16 16:57:07 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int			number;
	std::string name;
	std::string	tmp;

	std::cout << "Number of zombies > ";
	std::getline(std::cin, tmp);
	number = atoi(tmp.c_str());
	std::cout << "Zombie's name > ";
	std::cin >> name;
	Zombie	*zombie = zombieHorde(number, name);
	for (int i = 0; i < number; i++)
		zombie[i].announce();
	delete []zombie;
}