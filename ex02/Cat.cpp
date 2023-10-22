/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:37:14 by rficht            #+#    #+#             */
/*   Updated: 2023/10/22 17:01:54 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat() : Animal("Cat")
{}

Cat::Cat(const std::string& idea) : Animal("Cat", idea)
{}

Cat::~Cat()
{}

Cat::Cat(const Cat& rhs) : Animal(rhs)
{	*this = rhs;	}

Cat& Cat::operator = (const Cat& rhs)
{
	Animal::operator=(rhs);
	return *this;
}


void Cat::makeSound()
{	std::cout << "meeeeeeew" << std::endl;	}
