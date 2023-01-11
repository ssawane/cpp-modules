/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:11:13 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/03 21:36:15 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int ac, char* av[]) {
	if (ac == 2) {
		Convert	val((std::string(av[1])));

		val.display();
	}
	else {
		std::cout << "Invalid numbers of arguments!" << std::endl;
	}
	return 0;
}