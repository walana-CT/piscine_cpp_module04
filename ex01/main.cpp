/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:11:56 by rficht            #+#    #+#             */
/*   Updated: 2023/10/06 16:47:07 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Dog*	dog1 = new Dog();
	Animal*	dog2 = new Dog();
	Cat*	cat1 = new Cat();
	Animal*	cat2 = new Cat();

	std::cout << "dog 2 type: " << dog2->getType() << std::endl;
	dog1->makeSound();
	dog2->makeSound();

	std::cout << "dog 2 type: " << dog2->getType() << std::endl;
	cat1->makeSound();
	cat2->makeSound();

	delete dog1;
	delete dog2;
	delete cat1;
	delete cat2;

	return 0;
}
