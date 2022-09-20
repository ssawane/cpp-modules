/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:36:56 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/14 10:23:08 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->data = 0;
	this->index = 0;
}

Contact::~Contact()
{
	
}

void	Contact::RecordData(std::string line)
{
	if (this->data == 0)
		this->firstname = line;
	else if (this->data == 1)
		this->lastname = line;
	else if (this->data == 2)
		this->nickname = line;
	else if (this->data == 3)
		this->phonenumber = line;
	else if (this->data == 4)
		this->darksecret = line;
	this->data++;
}

void	Contact::ChoosePrompt()
{
	if (this->data == 0)
		std::cout << "Enter first name: " << std::endl;
	else if (this->data == 1)
		std::cout << "Enter last name: " << std::endl;
	else if (this->data == 2)
		std::cout << "Enter nickname: " << std::endl;
	else if (this->data == 3)
		std::cout << "Enter phone number: " << std::endl;
	else if (this->data == 4)
		std::cout << "Enter darkest secret: " << std::endl;
}

int	Contact::SetData(int index)
{
	std::string	line;

	std::cout << "Adding new contact" << std::endl;
	std::cout << "You can enter 'BREAK' to stop" << std::endl << std::endl;
	this->index = index;
	while (this->data < 5)
	{
		this->ChoosePrompt();
		std::cout << "> ";
		std::getline(std::cin, line);
		if (line == "BREAK")
			return 1;
		else if (!line.empty())
			this->RecordData(line);
		else
			std::cout << "This field cannot be empty!" << std::endl;
	}
	std::cout << "Contact added successfully" << std::endl;
	this->data = 0;
	return 0;
}

void	Contact::DisplayContact()
{
	std::cout << "|" << std::setw(10) << this->index << "|";
	if (this->firstname.length() > 10)
		std::cout << this->firstname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->firstname << "|";
	if (this->lastname.length() > 10)
		std::cout << this->lastname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->lastname << "|";
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->nickname << "|";
	std::cout << std::endl;
}

void	Contact::GetData()
{
	std::cout << "First name: " << this->firstname << std::endl
		<< "Last name: " << this->lastname << std::endl
		<< "Nick name: " << this->nickname << std::endl
		<< "Phone number: " << this->phonenumber << std::endl
		<< "Darkest secret: " << this->darksecret << std::endl;
}
