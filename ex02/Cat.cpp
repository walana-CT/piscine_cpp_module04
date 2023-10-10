/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:37:14 by rficht            #+#    #+#             */
/*   Updated: 2023/10/10 15:04:47 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	this->_brain = new Brain();
}

Cat::Cat(const std::string& idea) : AAnimal("Cat")
{
	this->_brain = new Brain(idea);
}

Cat::~Cat()
{
	delete this->_brain;
}

Cat::Cat(const Cat& Cat)
{
	this->_brain = new Brain();
	*this = Cat;
}

Cat& Cat::operator = (const Cat& rhs)
{
	AAnimal::operator=(rhs);
	return *this;
}


void Cat::makeSound()
{
	std::cout << "meeeeeeew" << std::endl;
}
