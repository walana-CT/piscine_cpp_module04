/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:11:45 by rficht            #+#    #+#             */
/*   Updated: 2023/10/20 10:30:32 by rficht           ###   ########.fr       */
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
	WrongCat(const WrongCat& rhs);
	~WrongCat();
	void makeSound();

	WrongCat& operator=(WrongCat const & rhs);
};

#endif
