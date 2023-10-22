/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:13 by rficht            #+#    #+#             */
/*   Updated: 2023/10/22 14:49:48 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{}

AAnimal::AAnimal(const std::string& type) : _type(type)
{}

AAnimal::AAnimal(const AAnimal& rhs)
{
	*this = rhs;
}

AAnimal::~AAnimal()
{}

const std::string& AAnimal::getType() const
{
	return(this->_type);
}

AAnimal & AAnimal::operator = (AAnimal const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return *this;
}

void AAnimal::makeSound()
{
	std::cout << "Animal noize !" << std::endl;
}