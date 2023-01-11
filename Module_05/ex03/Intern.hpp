/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:24:32 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/27 19:59:16 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class Intern
{
private:

public:
	Intern();
	Intern(const Intern& other);
	Intern &operator=(const Intern& other);
	~Intern();

	Form*	makeForm(std::string name, std::string target);
};
