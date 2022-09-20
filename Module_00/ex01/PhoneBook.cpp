/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:30:54 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/14 10:41:07 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->count = 0;
	this->number = 0;
}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::Greeting()
{
	std::cout << "Greetings!" << std::endl;
	std::cout << "Enter a command (ADD, SEARCH or EXIT)" << std::endl;
}

void	PhoneBook::AddContact()
{
	if (this->count == 8)
		this->count = 0;
	if (!this->Contacts[this->count].SetData(this->count + 1))
	{
		this->count++;
		this->number++;
	}
}

void	PhoneBook::ChooseContact()
{
	std::string	line;
	int			val;

	std::cout << std::endl;
	std::cout << "Enter an index of contact for more details" << std::endl;
	std::cout << "> ";
	std::getline(std::cin, line);
	if (!line.empty())
	{
		val = atoi(line.c_str());
		if (val <= 0 || val > this->number || val > 8)
			std::cout << "Incorrect index" << std::endl;
		else
			this->Contacts[val - 1].GetData();
	}
	else
		std::cout << "Back to main menu" << std::endl;
}

void	PhoneBook::SearchContact()
{
	if (this->number)
	{
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|-------------------------------------------|" << std::endl;
		for (int i = 0; i < 8 && i < this->number; i++)
			this->Contacts[i].DisplayContact();
		this->ChooseContact();
	}
	else
		std::cout << "No contacts found" << std::endl;
}