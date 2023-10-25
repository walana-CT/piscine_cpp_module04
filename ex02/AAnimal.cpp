/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:13 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:14:52 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("default")
{}

AAnimal::AAnimal(const std::string& type) : _type(type)
{}

AAnimal::AAnimal(const AAnimal& rhs)
{	*this = rhs;	}

AAnimal::~AAnimal()
{}

AAnimal & AAnimal::operator = (AAnimal const & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

const std::string& AAnimal::getType() const
{	return(this->_type);	}



void AAnimal::makeSound()
{
	std::cout << "AAnimal noize !" << std::endl;
}
