/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:14:31 by rficht            #+#    #+#             */
/*   Updated: 2023/10/17 11:12:10 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{	std::cout << "Cure constructor called" << std::endl;}

Cure* Cure::clone() const
{
	std::cout << "Cure clone called" << std::endl;
	Cure* copy = new Cure(); 
	return(copy);
}

Cure::~Cure()
{std::cout << "Cure deconstructor called" << std::endl;}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}