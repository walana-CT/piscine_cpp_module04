/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:43:34 by rficht            #+#    #+#             */
/*   Updated: 2023/10/22 17:01:25 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const std::string& idea);
	Dog(const Dog& rhs);
	~Dog();

	Dog& operator=(Dog const & rhs);

	void makeSound();
};

#endif
