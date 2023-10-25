/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:45:48 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:33:56 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog() : Animal("Dog")
{	std::cout << "Constructor: Dog()" << std::endl;	}

Dog::~Dog()
{	std::cout << "Constructor: Dog(" << type << ")" << std::endl;	}

Dog::Dog(const Dog& rhs) : Animal(rhs)
{
	std::cout << "Copy constructor: Dog(" << rhs.getType() << ")" << std::endl;
	*this = rhs;
}

Dog& Dog::operator = (const Dog& rhs)
{
	Animal::operator=(rhs);
	return *this;
}


void Dog::makeSound()
{
	std::cout << "waf waf !" << std::endl;
}
