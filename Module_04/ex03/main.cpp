/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:31:35 by ssawane           #+#    #+#             */
/*   Updated: 2022/10/14 12:48:11 by ssawane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int	main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	/*----------------------------------------*/

	// IMateriaSource *mat = new MateriaSource();
	// ICharacter *john = new Character("john");
	// AMateria *tmp;
	// AMateria *floor[4];

	// for (int i = 0; i < 4; i++) {
	// 	mat->learnMateria(new Ice());
	// 	tmp = mat->createMateria("ice");
	// 	john->equip(tmp);
	// 	floor[i] = tmp;
	// }

	// ICharacter *sam = new Character("sam");

	// for (int i = 0; i < 4; i++) {
	// 	john->use(i, *sam);
	// }

	// for (int i = 0; i < 4; i++) {
	// 	john->unequip(i);
	// 	delete floor[i];
	// }

	// delete mat;
	// delete john;
	// delete sam;
	
	return 0;
}