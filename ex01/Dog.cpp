/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:45:48 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:42:02 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{	std::cout << "Constructor: Dog()" << std::endl;	}

Dog::Dog(const std::string& idea) : Animal("Dog"), _brain(new Brain(idea))
{	std::cout << "Constructor: Dog(" << idea << ")"<< std::endl;	}

Dog::Dog(const Dog& rhs) : Animal(rhs), _brain(new Brain())
{	
	std::cout << "Copy constructor: Dog(" << rhs.getType() << ")" << std::endl;
	*this = rhs;
}

Dog::~Dog()
{	
	std::cout << "Destructor: ~Dog()" << std::endl;
	delete (this->_brain);	
}

Dog& Dog::operator = (const Dog& rhs)
{
	Animal::operator=(rhs);
	return *this;
}

void Dog::makeSound()
{	std::cout << "woof woof !" << std::endl;	}

const Brain* Dog::getBrain() const
{	return(this->_brain);	}
