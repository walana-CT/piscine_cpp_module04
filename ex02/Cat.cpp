/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:37:14 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:21:41 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat() : AAnimal("Cat"), _brain(new Brain())
{}

Cat::Cat(const std::string& idea) : AAnimal("Cat"), _brain(new Brain(idea))
{}

Cat::Cat(const Cat& rhs) : AAnimal(rhs), _brain(new Brain())
{	*this = rhs;	}

Cat::~Cat()
{	delete (this->_brain);	}

Cat& Cat::operator = (const Cat& rhs)
{
	AAnimal::operator=(rhs);
	if (this != &rhs)
		*(this->_brain) = *(rhs.getBrain());
	return *this;
}

void Cat::makeSound()
{	std::cout << "meeeeeeew" << std::endl;	}

const Brain* Cat::getBrain() const
{	return(this->_brain);	}
