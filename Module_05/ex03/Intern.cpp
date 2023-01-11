/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:57:27 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/27 20:25:27 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other) {
	(void)other;
}

Intern &Intern::operator=(const Intern& other) {
	(void)other;
	return *this;
}

Intern::~Intern() {}

Form*	Intern::makeForm(std::string name, std::string target) {
	int	count = -1;
	std::string forms[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	for (int i = 0; i < 3; i++) {
		if (name == forms[i]) {
			count = i;
			break;
		}
	}

	switch (count) {
	case 0: {
		ShrubberyCreationForm* res = new ShrubberyCreationForm(target);
		std::cout << "Intern creates " << name << " form\n";
		return res;
	}
	case 1: {
		RobotomyRequestForm* res = new RobotomyRequestForm(target);
		std::cout << "Intern creates " << name << " form\n";
		return res;
	}
	case 2: {
		PresidentialPardonForm* res = new PresidentialPardonForm(target);
		std::cout << "Intern creates " << name << " form\n";
		return res;
	}
	default:
		throw std::runtime_error("No such form name!");
		return NULL;
	}
}