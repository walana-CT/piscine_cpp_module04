/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:28:19 by rficht            #+#    #+#             */
/*   Updated: 2023/10/13 11:23:23 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Bob")
{
	for (size_t i = 0; i < 4; i++)
		inventory[i] = nullptr;
}

Character::Character(const std::string& name) : name(name)
{
	for (size_t i = 0; i < 4; i++)
		inventory[i] = nullptr;
}

std::string const & Character::getName() const
{
	return (this->name);
}

Character::~Character()
{}

void Character::equip(AMateria* m)
{
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
