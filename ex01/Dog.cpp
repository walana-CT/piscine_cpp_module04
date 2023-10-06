/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:45:48 by rficht            #+#    #+#             */
/*   Updated: 2023/10/05 17:36:36 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog() : Animal("Dog")
{}

Dog::~Dog()
{}

Dog::Dog(const Dog& dog)
{
	*this = dog;
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
