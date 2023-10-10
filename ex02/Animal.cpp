/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:13 by rficht            #+#    #+#             */
/*   Updated: 2023/10/10 15:11:05 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{}

AAnimal::AAnimal(const std::string& type) : _type(type)
{}

AAnimal::AAnimal(const AAnimal& animal)
{
	*this = animal;
}

AAnimal::~AAnimal()
{}

const std::string& AAnimal::getType() const
{
	return(this->_type);
}

const Brain* AAnimal::getBrain() const
{
	return(this->_brain);
}

AAnimal & AAnimal::operator = (AAnimal const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		*(this->_brain) = *(rhs.getBrain());
	}
	return *this;
}
