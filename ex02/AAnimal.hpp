/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:12:31 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:03:47 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP 

# include <iostream>
# include <string>



class AAnimal
{
protected:
	std::string		_type;
public:
	AAnimal();
	AAnimal(const std::string& type);
	AAnimal(const AAnimal& Aanimal);
	virtual ~AAnimal();
	virtual void makeSound() = 0;

	AAnimal & operator = (AAnimal const & rhs);

	const std::string& getType() const;
};

#endif
