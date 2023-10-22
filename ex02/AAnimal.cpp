/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:13 by rficht            #+#    #+#             */
/*   Updated: 2023/10/22 16:58:00 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("default"), _brain(new Brain())
{}

AAnimal::AAnimal(const std::string& type) : _type(type), _brain(new Brain())
{}

AAnimal::AAnimal(const std::string& type, const std::string& idea) : _type(type), _brain(new Brain(idea))
{}

AAnimal::AAnimal(const AAnimal& rhs) : _brain(new Brain())
{	*this = rhs;	}

AAnimal::~AAnimal()
{	delete (this->_brain);	}

AAnimal & AAnimal::operator = (AAnimal const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		*(this->_brain) = *(rhs.getBrain());
	}
	return *this;
}

const std::string& AAnimal::getType() const
{	return(this->_type);	}

const Brain* AAnimal::getBrain() const
{	return(this->_brain);	}

void AAnimal::makeSound()
{
	std::cout << "AAnimal noize !" << std::endl;
}
