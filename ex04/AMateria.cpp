/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:20:51 by rficht            #+#    #+#             */
/*   Updated: 2023/10/11 15:34:44 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

AMateria::AMateria() : type("default")
{}

AMateria::AMateria(std::string const & type) : type(type)
{}

std::string const & AMateria::getType() const
{
	return (this->type);
}

AMateria::~AMateria()
{
	delete this;
}