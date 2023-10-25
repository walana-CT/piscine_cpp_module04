/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:20:22 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:11:31 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"
# include "Brain.hpp"


class Cat : public Animal
{
private:
	Brain*	_brain;
public:
	Cat();
	Cat(const std::string& idea);
	Cat(const Cat& Cat);
	~Cat();

	Cat& operator=(Cat const & rhs);

	void makeSound();
	const Brain* getBrain() const;
};

#endif
