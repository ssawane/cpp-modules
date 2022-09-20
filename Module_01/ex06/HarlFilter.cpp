/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:15:18 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/19 20:32:44 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

void	HarlFilter::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	HarlFilter::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	HarlFilter::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	HarlFilter::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	HarlFilter::complain(std::string level)
{
	void (HarlFilter::*funcs[])(void) = {
		&HarlFilter::debug,
        &HarlFilter::info,
		&HarlFilter::warning,
        &HarlFilter::error,
	};
	int a = -1;
	std::string	type[] = {
		"DEBUG",
		"INFO",
        "WARNING",
        "ERROR",
	};

	for (int i = 0; i < 4; i++)
	{
		if (type[i] == level)
			a = i;
	}
	switch(a)
	{
		case 0:
			(this->*funcs[0])();
		case 1:
			(this->*funcs[1])();
		case 2:
			(this->*funcs[2])();
		case 3:
			(this->*funcs[3])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}