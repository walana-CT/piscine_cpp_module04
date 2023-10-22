/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:45:48 by rficht            #+#    #+#             */
/*   Updated: 2023/10/22 17:15:56 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{}

Dog::Dog(const std::string& idea) : AAnimal("Dog", idea)
{}

Dog::~Dog()
{}

Dog::Dog(const Dog& rhs) : AAnimal(rhs)
{	*this = rhs;	}

Dog& Dog::operator = (const Dog& rhs)
{
	AAnimal::operator=(rhs);
	return *this;
}


void Dog::makeSound()
{	std::cout << "woof woof !" << std::endl;	}
