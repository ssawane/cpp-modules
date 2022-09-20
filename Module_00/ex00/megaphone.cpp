/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:38:53 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/11 13:46:53 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int        i;
	int        j;
	
	i = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (ac > 1)
	{
		while (++i < ac)
		{
			j = -1;
			while (av[i][++j])
				std::cout << (char)toupper(av[i][j]);
		}
		std::cout << std::endl;
	}
	return (0);
}