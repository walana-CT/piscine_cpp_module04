/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:56:32 by rficht            #+#    #+#             */
/*   Updated: 2023/10/17 11:08:10 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{	std::cout << "Ice constructor called" << std::endl;}

Ice* Ice::clone() const
{
	std::cout << "Ice clone called" << std::endl;
	Ice* copy = new Ice(); 
	return(copy);
}

Ice::~Ice()
{	std::cout << "Ice destructor called" << std::endl;}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
