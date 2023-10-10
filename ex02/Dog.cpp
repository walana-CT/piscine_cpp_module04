/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:45:48 by rficht            #+#    #+#             */
/*   Updated: 2023/10/10 15:04:47 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	this->_brain = new Brain();
}

Dog::Dog(const std::string& idea) : AAnimal("Dog")
{
	this->_brain = new Brain(idea);
}

Dog::~Dog()
{}

Dog::Dog(const Dog& dog)
{
	this->_brain = new Brain();
	*this = dog;
}

Dog& Dog::operator = (const Dog& rhs)
{
	AAnimal::operator=(rhs);
	return *this;
}


void Dog::makeSound()
{
	std::cout << "waf waf !" << std::endl;
}
