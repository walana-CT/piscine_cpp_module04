/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:37:14 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:41:18 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{	std::cout << "Constructor: Cat()" << std::endl;	}

Cat::Cat(const std::string& idea) : Animal("Cat"), _brain(new Brain(idea))
{	std::cout << "Constructor: Cat(" << idea << ")"<< std::endl;	}

Cat::Cat(const Cat& rhs) : Animal(rhs), _brain(new Brain())
{	
	std::cout << "Copy constructor: Cat(" << rhs.getType() << ")" << std::endl;
	*this = rhs;	
}

Cat::~Cat()
{	
	std::cout << "Destructor: ~Cat()" << std::endl;
	delete (this->_brain);
}

Cat& Cat::operator = (const Cat& rhs)
{
	Animal::operator=(rhs);
	if (this != &rhs)
		*(this->_brain) = *(rhs.getBrain());
	return *this;
}

void Cat::makeSound()
{	std::cout << "meeeeeeew" << std::endl;	}

const Brain* Cat::getBrain() const
{	return(this->_brain);	}
