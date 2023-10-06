/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:37:14 by rficht            #+#    #+#             */
/*   Updated: 2023/10/06 17:17:38 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->_brain = new Brain("cat");
}

Cat::~Cat()
{
	delete this->_brain;
}

Cat::Cat(const Cat& Cat)
{
	*this = Cat;
}

Cat& Cat::operator = (const Cat& rhs)
{
	Animal::operator=(rhs);
	return *this;
}


void Cat::makeSound()
{
	std::cout << "meeeeeeew" << std::endl;
}
