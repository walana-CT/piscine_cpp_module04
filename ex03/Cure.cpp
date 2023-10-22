/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:14:31 by rficht            #+#    #+#             */
/*   Updated: 2023/10/20 10:16:21 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{	//std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure& rhs) : AMateria(rhs)
{
	*this = rhs;
}

Cure* Cure::clone() const
{
	//std::cout << "Cure clone called" << std::endl;
	Cure* copy = new Cure(); 
	return(copy);
}

Cure::~Cure()
{
	//std::cout << "Cure deconstructor called" << std::endl;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure& Cure::operator = (const Cure& rhs)
{
	AMateria::operator=(rhs);
	return *this;
}