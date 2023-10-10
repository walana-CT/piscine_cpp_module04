/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:34:40 by rficht            #+#    #+#             */
/*   Updated: 2023/10/06 17:48:53 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{}

Brain::Brain(const std::string& idea)
{
	for (size_t i = 0; i < 100; i++)
	{
		this->_ideas[i] = idea + " " + std::to_string(i);
	}
}

Brain::Brain(const Brain& brain)
{
	*this = brain;
}

Brain::~Brain()
{}

Brain & Brain::operator = (Brain const & rhs)
{
	if (this != &rhs)
	{
		for (size_t i = 0; i < 100; i++)
		{
			this->_ideas[i] = rhs.getIdea(i);
		}
	}
	return *this;
}

std::string Brain::getIdea(int i) const
{
	if (i < 100 && i >= 0)
		return(this->_ideas[i]);
	else return("outside brain array");
}