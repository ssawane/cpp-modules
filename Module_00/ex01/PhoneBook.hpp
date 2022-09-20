/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:31:18 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/14 10:08:24 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact Contacts[8];
	int     count;
	int		number;

public:
	PhoneBook();
	~PhoneBook();

	void	Greeting();
	void	AddContact();
	void	SearchContact();
	void    ChooseContact();
};

#endif