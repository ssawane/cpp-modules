/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:39:38 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/26 11:52:17 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	Bureaucrat	tony("Tony", 5);
	Bureaucrat	sam("Sam", 147);
	ShrubberyCreationForm	doc3("home");
	ShrubberyCreationForm	doc4("ecole");
	RobotomyRequestForm		doc5("mark");
	PresidentialPardonForm	doc6("someone");

	std::cout << tony << std::endl;
	std::cout << doc3 << std::endl;
	tony.executeForm(doc3);
	tony.signForm(doc3);
	tony.executeForm(doc3);
	std::cout << doc3 << std::endl << std::endl;

	std::cout << sam << std::endl;
	std::cout << doc4 << std::endl;
	sam.signForm(doc4);
	sam.executeForm(doc4);
	for (int i = 0; i < 5; i++) {
		sam++;
	}
	sam.signForm(doc4);
	sam.executeForm(doc4);
	for (int i = 0; i < 20; i++) {
		sam++;
	}
	std::cout << sam << std::endl;
	sam.executeForm(doc4);
	std::cout << doc4 << std::endl << std::endl;

	tony.signForm(doc5);
	sam.executeForm(doc5);
	tony.executeForm(doc5);
	std::cout << std::endl;

	tony.signForm(doc6);
	tony.executeForm(doc6);
	
	return 0;
}