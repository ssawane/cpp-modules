/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:39:38 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/23 19:43:36 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	tony("Tony", 5);
	Bureaucrat	sam("Sam", 200);

	std::cout << tony << std::endl;
	std::cout << sam << std::endl;

	for (int i = 0; i < 10; i++) {
		tony++;
	}

	std::cout << tony << std::endl;

	for (int i = 0; i < 152; i++) {
		--tony;
	}

	std::cout << tony << std::endl;
	
	return 0;
}