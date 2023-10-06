/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:12:07 by rficht            #+#    #+#             */
/*   Updated: 2023/10/06 16:15:30 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type)
{}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal)
{
	*this = wrongAnimal;
}

WrongAnimal::~WrongAnimal()
{}

const std::string& WrongAnimal::getType() const
{
	return(this->_type);
}

WrongAnimal & WrongAnimal::operator = (WrongAnimal const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return *this;
}

void WrongAnimal::makeSound()
{
	std::cout << "Weird animal noize !" << std::endl;
}