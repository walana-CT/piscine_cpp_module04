/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:13 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:33:33 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{	std::cout << "Constructor: Animal()" << std::endl;	}

Animal::Animal(const std::string& type) : _type(type)
{	std::cout << "Constructor: Animal(" << type << ")" << std::endl;	}

Animal::Animal(const Animal& rhs)
{
	std::cout << "Copy constructor: Animal(" << rhs.getType() << ")" << std::endl;	
	*this = rhs;
}

Animal::~Animal()
{	std::cout << "Destructor: ~Animal()" << std::endl;	}

const std::string& Animal::getType() const
{
	return(this->_type);
}

Animal & Animal::operator = (Animal const & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

void Animal::makeSound()
{
	std::cout << "Animal noize !" << std::endl;
}