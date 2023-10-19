/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:10:32 by rficht            #+#    #+#             */
/*   Updated: 2023/10/19 11:13:45 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"


int main()
{
	std::cout << std::endl << "declaring variables" << std::endl << std::endl;

	AMateria*	ice1;
	AMateria*	ice2;
	AMateria*	cure1;
	IMateriaSource* src = new MateriaSource();
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	std::cout << std::endl << "learning materias" << std::endl << std::endl;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	std::cout << std::endl << "creating materias from src" << std::endl << std::endl;

	ice1 = src->createMateria("ice");
	ice2 = src->createMateria("ice");	
	cure1 = src->createMateria("cure");

	std::cout << std::endl << "equiping materias and doing stuff with it" << std::endl << std::endl;
	
	me->equip(ice1);
	me->equip(cure1);
	me->equip(ice2);
	me->equip(ice2);
	me->equip(ice2);
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
