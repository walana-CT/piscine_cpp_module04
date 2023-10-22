/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:18:24 by rficht            #+#    #+#             */
/*   Updated: 2023/10/22 17:21:41 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	//std::cout << "MateriaSource constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		known[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& m)
{
	*this = m;
}

MateriaSource::~MateriaSource()
{
	//std::cout << "MateriaSource destructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		if(known[i])
			delete known[i];	
}

void MateriaSource::learnMateria(AMateria* m)
{
	std::cout << "LearnMateria called with " << m->getType() << std::endl;
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
	std::cout << "MateriaSource createmateria called with " << type << std::endl;

	for (size_t i = 0; i < 4; i++)
		if (known[i])
			if (known[i]->getType() == type)
				return (known[i]);

	std::cout << "Unknown Materia" << std::endl;
	return (NULL);
}

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs)
{
	for (size_t i = 0; i < 4; i++)
	{
		if(known[i])
			delete known[i];
		if (!rhs.getKnown(i))
			known[i] = NULL;
		else
			known[i] = rhs.getKnown(i)->clone();		
	}
	return *this;
}

AMateria* MateriaSource::getKnown(int idx) const
{
	if (idx < 0 || idx >= 4)
		return(NULL);
	return(this->known[idx]);
}
