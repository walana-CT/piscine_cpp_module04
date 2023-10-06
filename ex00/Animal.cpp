/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:13 by rficht            #+#    #+#             */
/*   Updated: 2023/10/05 17:10:54 by rficht           ###   ########.fr       */
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

Animal & Animal::operator = (Animal const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return *this;
}

void Animal::makeSound()
{
	std::cout << "Animal noize !" << std::endl;
}