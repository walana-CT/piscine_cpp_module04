/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:12:30 by rficht            #+#    #+#             */
/*   Updated: 2023/10/06 16:15:22 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP 

# include <iostream>
# include <string>

class WrongAnimal
{
protected:
	std::string _type;
private:
	/* data */
public:
	WrongAnimal();
	WrongAnimal(const std::string& type);
	WrongAnimal(const WrongAnimal& wrongAnimal);
	~WrongAnimal();
	void makeSound();

	WrongAnimal & operator = (WrongAnimal const & rhs);

	const std::string& getType() const;
};

#endif
