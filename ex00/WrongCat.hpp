/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:11:45 by rficht            #+#    #+#             */
/*   Updated: 2023/10/06 16:21:16 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP 

# include <iostream>
# include <string>

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
protected:
	std::string type;
private:
	/* data */
public:
	WrongCat(/* args */);
	WrongCat(const WrongCat& wrongCat);
	~WrongCat();
	void makeSound();

	WrongCat& operator=(WrongCat const & rhs);
};

#endif
