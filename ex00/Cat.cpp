/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:37:14 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:40:23 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat() : Animal("Cat")
{	std::cout << "Constructor: Cat()" << std::endl;	}

Cat::Cat(const Cat& rhs) : Animal(rhs)
{
	std::cout << "Copy constructor: Cat(" << rhs.getType() << ")" << std::endl;
	*this = rhs;
}

Cat::~Cat()
{	std::cout << "Destructor: ~Cat()" << std::endl;	}

Cat& Cat::operator = (const Cat& rhs)
{
	Animal::operator=(rhs);
	return *this;
}


void Cat::makeSound()
{
	std::cout << "meeeeeeew" << std::endl;
}
