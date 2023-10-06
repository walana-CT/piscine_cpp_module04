/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:20:22 by rficht            #+#    #+#             */
/*   Updated: 2023/10/05 17:40:13 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP 

# include <iostream>
# include <string>

# include "Animal.hpp"

class Cat : public Animal
{
protected:
	std::string type;
private:
	/* data */
public:
	Cat(/* args */);
	Cat(const Cat& Cat);
	~Cat();
	void makeSound();

	Cat& operator=(Cat const & rhs);
};

#endif
