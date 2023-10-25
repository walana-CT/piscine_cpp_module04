/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:28:19 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 18:18:34 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Bob")
{
	//std::cout << "Character default constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const std::string& name) : name(name)
{
	//std::cout << "Character constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(Character const & rhs)
{
	*this = rhs;
}

Character::~Character()
{	//std::cout << "Character destuctor called" << std::endl;
}

Character & Character::operator = (Character const & rhs)
{
	this->name = rhs.getName();
	for (size_t i = 0; i < 4; i++)
	{
		if (!rhs.getInventory(i))
			inventory[i] = NULL;
		else
			inventory[i] = rhs.getInventory(i);
	}
	return *this;
}

std::string const & Character::getName() const
{
	return (this->name);
}

AMateria* Character::getInventory(int idx) const
{
	if (idx < 0 || idx >= 4)
		return(NULL);
	return(this->inventory[idx]);
}

void Character::equip(AMateria* m)
{
	std::cout << "Character equip called with " << m->getType() << ".";
	for (size_t i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			std::cout << " Equiped in slot" << i << std::endl;		
			inventory[i] = m;
			return;
		}
	}
	std::cout << " Inventory is full" << std::endl;

	return;
}

void Character::unequip(int idx)
{
	std::cout << "Unequip called on " << this->name << ".";
	if (idx >= 0 && idx < 4)
	{
		std::cout << " Droping " << this->inventory[idx]->getType() << std::endl;
		this->inventory[idx] = NULL;
	}
	else
		std::cout << "Invalide inventory slot (0-4)" << std::endl;
	return;
}

void Character::use(int idx, ICharacter& target)
{
	std::cout << "Use called on " << this->name << " (slot" << idx << ").";	
	if (idx < 0 || idx >= 4)
	{
		std::cout << " Invalide inventory slot (0-4)" << std::endl;
		return;
	}
	if (!this->inventory[idx])
	{	
		std::cout << " Selected slot is empty" << std::endl;
		return;
	}
	std::cout << std::endl;
	this->inventory[idx]->use(target);
	return;
}


