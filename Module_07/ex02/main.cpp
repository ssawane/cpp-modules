/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:59:45 by ssawane           #+#    #+#             */
/*   Updated: 2022/11/12 14:52:43 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/*_____________________TEST_TYPE_____________________*/
class test_type
{
private:
	int		a;
	char	b;
	double	c;
public:
	test_type() : a(0), b('0'), c(0.0) {
		(void)a;
		(void)b;
		(void)c;
	};
	~test_type() {};
};
/*_____________________TEST_TYPE_____________________*/


int	main(void) {
	Array<test_type>	a;
	Array<test_type>	b(10);
	Array<int>			c(10);

	std::cout << "a size: " << a.size() << std::endl;
	std::cout << "b size: " << b.size() << std::endl;

	c[2] = 34;
	c[5] = 2;
	c[7] = 9;
	
	for (unsigned int i = 0; i < c.size(); i++) {
		std::cout << c[i] << std::endl;
	}

	try {
		std::cout << "c[11]: " << c[11] << std::endl;
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
	
	return 0;
}