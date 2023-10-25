/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:20:22 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:30:30 by rficht           ###   ########.fr       */
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
public:
	Cat();
	Cat(const Cat& Cat);
	~Cat();
	void makeSound();

	Cat& operator=(Cat const & rhs);
};

#endif
