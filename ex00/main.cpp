/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:11:56 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:34:56 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Dog*		dog1 = new Dog();
	Animal*	dog2 = new Dog();
	Cat*		cat1 = new Cat();
	Animal*	cat2 = new Cat();

	std::cout << "dog 2 type: " << dog2->getType() << std::endl;
	dog1->makeSound();
	dog2->makeSound();

	std::cout << "cat 2 type: " << cat2->getType() << std::endl;
	cat1->makeSound();
	cat2->makeSound();

	delete dog1;
	delete dog2;
	delete cat1;
	delete cat2;

	std::cout << std::endl;
	std::cout << "Weird animal is used to show the importance of virtual methodes (second wrong animal is declared\
as) a wrong cat but still makes weird animal sound" << std::endl;

	WrongAnimal*	zinzinCat1 = new WrongCat();
	WrongCat*		zinzinCat2 = new WrongCat();
	std::cout << "zinzinCat1 type: " << zinzinCat1->getType() << std::endl;
	std::cout << "zinzinCat2 type: " << zinzinCat2->getType() << std::endl;
	zinzinCat1->makeSound();
	zinzinCat2->makeSound();

	delete zinzinCat1;
	delete zinzinCat2;

	return 0;
}
