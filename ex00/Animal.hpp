/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:31 by rficht            #+#    #+#             */
/*   Updated: 2023/10/05 17:35:26 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP 

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string _type;
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
};

#endif
