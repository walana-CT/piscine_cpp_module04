/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:11:56 by rficht            #+#    #+#             */
/*   Updated: 2023/10/25 11:25:20 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Cat cat1 = Cat("make the glass fall");
	//if we try to instanciate an animal we will fail
	//AAnimal gougagak = Cat();

	cat1.makeSound();
	
	return 0;
}
