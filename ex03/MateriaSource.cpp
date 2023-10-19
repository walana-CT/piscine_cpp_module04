/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:18:24 by rficht            #+#    #+#             */
/*   Updated: 2023/10/19 14:29:32 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		known[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& m)
{
	*this = m;
}

void MateriaSource::learnMateria(AMateria* m)
{
	std::cout << "LearnMateria called with" << m->getType() << std::endl;
	for (size_t i = 0;i < 4; i++)
	{
		if (!known[i])
		{
			known[i] = m->clone();
			delete m;
			return;		
		}		
	}
	std::cout << "MateriaSource is full (materia deleted)" << std::endl;
	delete m;
	return;
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
	std::cout << "MateriaSource creatmateria called with" << type << std::endl;

	for (size_t i = 0; i < 4; i++)
		if (known[i])
			if (known[i]->getType() == type)
				return (known[i]);

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

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs)
{
	for (size_t i = 0; i < 4; i++)
	{
		if(known[i])
			delete known[i];
		if (!rhs.getKnown(i))
			known[i] = nullptr;
		else
			known[i] = rhs.getKnown(i)->clone();		
	}
	return *this;
}

AMateria* MateriaSource::getKnown(int idx) const
{
	if (idx < 0 || idx >= 4)
		return(nullptr);
	return(this->known[idx]);
}