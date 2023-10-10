/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:31 by rficht            #+#    #+#             */
/*   Updated: 2023/10/10 15:11:03 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP 

# include <iostream>
# include <string>

# include "Brain.hpp"

class AAnimal
{
protected:
	std::string _type;
	Brain *_brain;
private:
	/* data */
public:
	AAnimal();
	AAnimal(const std::string& type);
	AAnimal(const AAnimal& animal);
	virtual ~AAnimal();
	virtual void makeSound() = 0;

	AAnimal & operator = (AAnimal const & rhs);

	const std::string& getType() const;
	const Brain* getBrain() const;
};

#endif
