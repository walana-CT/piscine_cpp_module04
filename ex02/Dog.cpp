/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:45:48 by rficht            #+#    #+#             */
/*   Updated: 2023/10/22 17:00:33 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog() : Animal("Dog")
{}

Dog::Dog(const std::string& idea) : Animal("Dog", idea)
{}

Dog::~Dog()
{}

Dog::Dog(const Dog& rhs) : Animal(rhs)
{	*this = rhs;	}

Dog& Dog::operator = (const Dog& rhs)
{
	Animal::operator=(rhs);
	return *this;
}


void Dog::makeSound()
{	std::cout << "woof woof !" << std::endl;	}
