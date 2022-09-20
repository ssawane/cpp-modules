/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:36:43 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/14 10:09:03 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <sstream>

class Contact
{
private:
	int         data;
	int 		index;
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darksecret;

public:
	Contact();
	~Contact();

	int		SetData(int index);
	void	RecordData(std::string line);
	void	ChoosePrompt();
	void	DisplayContact();
	void    GetData();
};

#endif