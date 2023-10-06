/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:13 by rficht            #+#    #+#             */
/*   Updated: 2023/10/06 17:52:39 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{}

Animal::Animal(const std::string& type) : _type(type)
{}

Animal::Animal(const Animal& animal)
{
	*this = animal;
}

Animal::~Animal()
{}

const std::string& Animal::getType() const
{
	return(this->_type);
}

const Brain* Animal::getBrain() const
{
	return(this->_brain);
}

Animal & Animal::operator = (Animal const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		*(this->_brain) = *(rhs.getBrain());
	}
	return *this;
}

void Animal::makeSound()
{
	std::cout << "Animal noize !" << std::endl;
}