/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:10:32 by rficht            #+#    #+#             */
/*   Updated: 2023/10/17 16:11:49 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"


int main()
{
	AMateria*	ice1;
	AMateria*	ice2;
	AMateria*	cure1;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");

	ice1 = src->createMateria("ice");
	ice2 = src->createMateria("ice");	
	cure1 = src->createMateria("cure");
	
	me->equip(ice1);
	me->equip(cure1);
	me->equip(ice2);
	me->equip(ice2);
	me->equip(ice2);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(5, *bob);
	me->use(1, *bob);
	me->unequip(1);
	me->use(1, *bob);
	me->equip(ice1);
	me->use(1, *bob);

	delete bob;
	delete src;
	delete me;

	return 0;
}
