/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:07:24 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/16 13:39:45 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	stack("main's stack");
	stack.announce();
	
	Zombie	*heap = newZombie("heap");
	heap->announce();
	
	randomChump("randomChump's stack");
	delete heap;
}