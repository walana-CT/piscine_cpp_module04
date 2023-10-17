/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:20:51 by rficht            #+#    #+#             */
/*   Updated: 2023/10/17 16:52:24 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

AMateria::AMateria() : type("default")
{}

AMateria::AMateria(std::string const & type) : type(type)
{}

AMateria::AMateria(AMateria const & rhs)
{
	*this = rhs;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

AMateria::~AMateria()
{}

AMateria & AMateria::operator = (AMateria const & rhs)
{
	this->type = rhs.getType();
	return *this;
}
