/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:31 by rficht            #+#    #+#             */
/*   Updated: 2023/10/22 16:55:22 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP 

# include <iostream>
# include <string>

# include "Brain.hpp"

class AAnimal
{
protected:
	std::string		_type;
	Brain			*_brain;
public:
	AAnimal();
	AAnimal(const std::string& type);
	AAnimal(const std::string& type, const std::string& idea);
	AAnimal(const AAnimal& rhs);
	virtual ~AAnimal();


	AAnimal & operator = (AAnimal const & rhs);

	const std::string& getType() const;
	const Brain* getBrain() const;
	virtual void makeSound() = 0;
};

#endif
