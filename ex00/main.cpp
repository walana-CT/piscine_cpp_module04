/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <robin.ficht@free.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:11:56 by rficht            #+#    #+#             */
/*   Updated: 2023/10/05 17:39:37 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Cat* dog1 = new Cat();
	Animal* dog2 = new Cat();

	dog1->makeSound();
	dog2->makeSound();


	delete dog1;
	delete dog2;

	return 0;
}
