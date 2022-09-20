/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 22:36:02 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/13 21:13:14 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	bool		run;
	std::string	command;

	run = true;
	PhoneBook.Greeting();
	while (run == true)
	{
		std::cout << "cmd > ";
		std::getline(std::cin, command);
		if (command == "ADD")
			PhoneBook.AddContact();
		else if (command == "SEARCH")
			PhoneBook.SearchContact();
		else if (command == "EXIT")
		{
			std::cout << "Bye!" << std::endl;
			run = false;
		}
		else
			std::cout << "Invalid command" << std::endl;
	}
}