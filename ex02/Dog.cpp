/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:45:48 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:22:10 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog() : AAnimal("Dog"), _brain(new Brain())
{}

Dog::Dog(const std::string& idea) : AAnimal("Dog"), _brain(new Brain(idea))
{}

Dog::Dog(const Dog& rhs) : AAnimal(rhs), _brain(new Brain())
{	*this = rhs;	}

Dog::~Dog()
{	delete (this->_brain);	}

Dog& Dog::operator = (const Dog& rhs)
{
	AAnimal::operator=(rhs);
	return *this;
}

void Dog::makeSound()
{	std::cout << "woof woof !" << std::endl;	}

const Brain* Dog::getBrain() const
{	return(this->_brain);	}
