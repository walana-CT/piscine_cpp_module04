/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:18:24 by rficht            #+#    #+#             */
/*   Updated: 2023/10/17 11:19:11 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		known[i] = nullptr;
}

void MateriaSource::learnMateria(AMateria* m)
{
	std::cout << "LearnMateria called with" << m->getType() << std::endl;
	for (size_t i = 0;i < 4; i++)
	{
		if (!known[i])
		{
			known[i] = m;
			return;		
		}		
	}
	std::cout << "MateriaSource is full" << std::endl;

	return;
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
	std::cout << "MateriaSource creatmateria called with" << type << std::endl;

	for (size_t i = 0; i < 4; i++)
		if (known[i])
			if (known[i]->getType() == type)
				return (known[i]->clone());

	std::cout << "Unknown Materia" << std::endl;
	return (nullptr);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		if(known[i])
			delete known[i];	
}

