/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:34:40 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:38:30 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor: Brain()" << std::endl;	
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = "Default idea";
}

Brain::Brain(const std::string& idea)
{
	std::cout << "Constructor: Brain(" << idea << ")" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = idea;
}

Brain::Brain(const Brain& brain)
{	
	std::cout << "Copy constructor: Brain()" << std::endl;
	*this = brain;	
}

Brain::~Brain()
{	std::cout << "Destructor: ~Brain()" << std::endl;	}

Brain & Brain::operator = (Brain const & rhs)
{
	if (this != &rhs)
		for (size_t i = 0; i < 100; i++)		
			this->_ideas[i] = rhs.getIdea(i);
	return *this;
}

std::string Brain::getIdea(int i) const
{

	if (i < 100 && i >= 0)
		return(this->_ideas[i]);
	else return("outside brain array");
}