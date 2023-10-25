/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:31 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:16:04 by rficht           ###   ########.fr       */
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
