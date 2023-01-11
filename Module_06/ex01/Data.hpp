/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:55:14 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/07 19:49:58 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

struct Data
{
	std::string	smth;
	int			a;

	Data() : smth("smth"), a(0) {};
	~Data() {};

	void	dataPrint(void);
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);
