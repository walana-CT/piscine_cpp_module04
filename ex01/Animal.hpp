/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:31 by rficht            #+#    #+#             */
/*   Updated: 2023/10/22 16:55:22 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP 

# include <iostream>
# include <string>

# include "Brain.hpp"

class Animal
{
protected:
	std::string		_type;
	Brain			*_brain;
public:
	Animal();
	Animal(const std::string& type);
	Animal(const std::string& type, const std::string& idea);
	Animal(const Animal& animal);
	virtual ~Animal();
	virtual void makeSound();

	Animal & operator = (Animal const & rhs);

	const std::string& getType() const;
	const Brain* getBrain() const;
};

#endif
