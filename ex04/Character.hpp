/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:27:46 by rficht            #+#    #+#             */
/*   Updated: 2023/10/11 15:42:10 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria* inventory[4];
public:
	Character();
	Character(const std::string& name);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif // CHARACTER_HPP

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
	size_t i = 0;

	for (i; i < 4; i++)
		if (!inventory[i])
			inventory[i] = m;

	if (i == 4)
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
