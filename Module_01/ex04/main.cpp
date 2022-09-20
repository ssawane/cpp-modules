/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:48:59 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/19 11:26:02 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char** av)
{
	Sed				Sed;
	std::ifstream	fin;

	if (ac == 4)
	{
		fin.open(av[1]);
		if (fin.is_open())
		{
			Sed.SetParams(av);
			Sed.Replace(&fin);
			fin.close();
		}
		else
			std::cout << "Cannot open input file!" << std::endl;
	}
	else
		std::cout << "Incorrect number of arguments!" << std::endl;
	return 0;
}