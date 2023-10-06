/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:43:34 by rficht            #+#    #+#             */
/*   Updated: 2023/10/06 18:03:05 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP 

# include <iostream>
# include <string>

# include "Animal.hpp"

class Dog : public Animal
{
protected:
	std::string type;
private:
	/* data */
public:
	Dog(/* args */);
	Dog(const std::string& idea);
	Dog(const Dog& dog);
	~Dog();
	void makeSound();

	Dog& operator=(Dog const & rhs);
};

#endif
