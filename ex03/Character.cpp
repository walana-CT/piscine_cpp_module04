/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:28:19 by rficht            #+#    #+#             */
/*   Updated: 2023/10/19 14:08:41 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Bob")
{
	std::cout << "Character default constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		inventory[i] = nullptr;
}

Character::Character(const std::string& name) : name(name)
{
	std::cout << "Character constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		inventory[i] = nullptr;
}

Character::Character(Character const & rhs)
{
	*this = rhs;
}

std::string const & Character::getName() const
{
	return (this->name);
}

AMateria* Character::getInventory(int idx) const
{
	if (idx < 0 || idx >= 4)
		return(nullptr);
	return(this->inventory[idx]);
}

Character::~Character()
{	std::cout << "Character destuctor called" << std::endl;}

void Character::equip(AMateria* m)
{
	std::cout << "Character equip called with " << m->getType() << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return;
		}
	}
	std::cout << "inventory is full" << std::endl;

	return;
}

void Character::unequip(int idx)
{
	std::cout << "Character destuctor called" << std::endl;
	if (idx >= 0 && idx < 4)
	{
		std::cout << this->name << " drop " << this->inventory[idx]->getType() << std::endl;
		this->inventory[idx] = nullptr;
	}
	else
		std::cout << "Invalide inventory slot (0-4)" << std::endl;

	return;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Invalide inventory slot (0-4)" << std::endl;
		return;
	}
	if (!this->inventory[idx])
	{	
		std::cout << "Selected slot is empty" << std::endl;
		return;
	}
	this->inventory[idx]->use(target);
	return;
}

Character & Character::operator = (Character const & rhs)
{
	this->name = rhs.getName();
	for (size_t i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		if (!rhs.getInventory(i))
			inventory[i] = nullptr;
		else
			inventory[i] = rhs.getInventory(i)->clone();
	}
	return *this;
}
