/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:11:26 by rficht            #+#    #+#             */
/*   Updated: 2023/10/20 10:30:24 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{}

WrongCat::~WrongCat()
{}

WrongCat::WrongCat(const WrongCat& rhs) : WrongAnimal(rhs)
{
	*this = rhs;
}

WrongCat& WrongCat::operator = (const WrongCat& rhs)
{
	WrongAnimal::operator=(rhs);
	return *this;
}


void WrongCat::makeSound()
{
	std::cout << "meeewewewewew" << std::endl;
}
