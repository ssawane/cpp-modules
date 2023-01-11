/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:39:38 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/28 20:52:27 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	tony("Tony", 5);
    Intern 		someRandomIntern;
    Form*		rrf;
	Form*		scf;
	Form*		ppf;
	
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	scf = someRandomIntern.makeForm("shrubbery creation", "Gomer");
	ppf = someRandomIntern.makeForm("presidential pardon", "Tommy");

	try {
		Form*		unknown;
		unknown = someRandomIntern.makeForm("some kind of form", "John");
		tony.signForm(*unknown);
		tony.executeForm(*unknown);
	}
	catch (std::exception& ex) {
		std::cout << "Intern cannot create form. " << ex.what() << std::endl;
	}

	std::cout << std::endl;

	tony.signForm(*rrf);
	tony.executeForm(*rrf);
	std::cout << std::endl;

	tony.signForm(*scf);
	tony.executeForm(*scf);
	std::cout << std::endl;

	tony.signForm(*ppf);
	tony.executeForm(*ppf);
	std::cout << std::endl;

	delete rrf;
	delete scf;
	delete ppf;
	
	return 0;
}