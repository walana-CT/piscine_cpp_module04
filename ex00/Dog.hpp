/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:43:34 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:16:34 by rficht           ###   ########.fr       */
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
public:
	Dog();
	Dog(const Dog& dog);
	~Dog();
	void makeSound();

	Dog& operator=(Dog const & rhs);
};

#endif
