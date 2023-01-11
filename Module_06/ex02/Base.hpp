/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:57:28 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/07 23:31:14 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <time.h>
#include <cstdlib>

class Base
{
public:
	virtual ~Base() {};
};

Base*	generate(void);
void	identity(Base* p);
void	identity(Base& p);
