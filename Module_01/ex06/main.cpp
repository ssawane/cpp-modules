/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:13:10 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/19 21:59:51 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

int	main(int ac, char **av)
{
	HarlFilter	harl;

	if (ac == 2)
		harl.complain(std::string(av[1]));
	else
		std::cout << "[ Incorrect number of arguments ]" << std::endl;
	
	return 0;
}