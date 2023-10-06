/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:31 by rficht            #+#    #+#             */
/*   Updated: 2023/10/06 17:20:54 by rficht           ###   ########.fr       */
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
	std::string _type;
	Brain *_brain;
private:
	/* data */
public:
	Animal();
	Animal(const std::string& type);
	Animal(const Animal& animal);
	virtual ~Animal();
	virtual void makeSound();

	Animal & operator = (Animal const & rhs);

	const std::string& getType() const;
	const Brain* getBrain() const;
};

#endif
