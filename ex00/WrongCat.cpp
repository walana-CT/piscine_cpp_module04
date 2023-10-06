/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:11:26 by rficht            #+#    #+#             */
/*   Updated: 2023/10/06 16:21:10 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{}

WrongCat::~WrongCat()
{}

WrongCat::WrongCat(const WrongCat& wrongCat)
{
	*this = wrongCat;
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
