/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:39:38 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/23 23:11:00 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	tony("Tony", 5);
	Form		doc1("Document 1", 10, 10);
	Form		doc2("Document 2", 0, 200);
	Form		doc3("Document 3", 3, 2);

	std::cout << tony << std::endl;
	std::cout << doc1 << std::endl;
	std::cout << doc2 << std::endl;
	std::cout << doc3 << std::endl;

	tony.signForm(doc1);
	tony.signForm(doc3);

	for (int i = 0; i < 4; i++) {
		tony++;
	}

	tony.signForm(doc3);

	std::cout << tony << std::endl;
	std::cout << doc1 << std::endl;
	std::cout << doc3 << std::endl;
	
	return 0;
}