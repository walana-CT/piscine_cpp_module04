/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:11:56 by rficht            #+#    #+#             */
/*   Updated: 2023/10/06 15:42:12 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Dog* dog1 = new Dog();
	Animal* dog2 = new Dog();
	Cat* cat1 = new Cat();
	Animal* cat2 = new Cat();

	dog1->makeSound();
	dog2->makeSound();

	cat1->makeSound();
	cat2->makeSound();

	delete dog1;
	delete dog2;

	return 0;
}
