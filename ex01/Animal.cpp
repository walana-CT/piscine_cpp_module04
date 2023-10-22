/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:13 by rficht            #+#    #+#             */
/*   Updated: 2023/10/22 16:58:00 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("default"), _brain(new Brain())
{}

Animal::Animal(const std::string& type) : _type(type), _brain(new Brain())
{}

Animal::Animal(const std::string& type, const std::string& idea) : _type(type), _brain(new Brain(idea))
{}

Animal::Animal(const Animal& rhs) : _brain(new Brain())
{	*this = rhs;	}

Animal::~Animal()
{	delete (this->_brain);	}

Animal & Animal::operator = (Animal const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		*(this->_brain) = *(rhs.getBrain());
	}
	return *this;
}

const std::string& Animal::getType() const
{	return(this->_type);	}

const Brain* Animal::getBrain() const
{	return(this->_brain);	}

void Animal::makeSound()
{
	std::cout << "Animal noize !" << std::endl;
}
