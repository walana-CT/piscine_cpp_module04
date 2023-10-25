/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:43:34 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:22:31 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain*	_brain;	
public:
	Dog();
	Dog(const std::string& idea);
	Dog(const Dog& rhs);
	~Dog();

	Dog& operator=(Dog const & rhs);

	void makeSound();
	const Brain* getBrain() const;
};

#endif
