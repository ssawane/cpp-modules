/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:33:06 by ssawane           #+#    #+#             */
/*   Updated: 2022/09/16 17:01:33 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N > 0)
	{
		Zombie	*arr = new Zombie[N];
		for (int i = 0; i < N; i++)
			arr[i].SetName(name);
		return arr;
	}
	return NULL;
}