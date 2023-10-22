/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rficht <rficht@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:11:56 by rficht            #+#    #+#             */
/*   Updated: 2023/10/22 16:53:17 by rficht           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Cat cat1 = Cat("make the glass fall");
	Cat cat2 = Cat("purr");
	Cat cat3 = Cat(cat1);

	std::cout << "cat 1 idea: " << cat1.getBrain()->getIdea(1) << std::endl;
	std::cout << "cat 1 brain address: " << (void *)(cat1.getBrain()) << std::endl;
	std::cout << "cat 2 idea: " << cat2.getBrain()->getIdea(1) << std::endl;
	std::cout << "cat 2 brain address: " << (void *)(cat2.getBrain()) << std::endl;
	std::cout << "cat 3 idea: " << cat3.getBrain()->getIdea(1) << std::endl;
	std::cout << "cat 3 brain address: " << (void *)(cat3.getBrain()) << std::endl;

	cat2 = cat1;
	
	std::cout << std::endl << "cat 2 = cat 1" << std::endl;
	std::cout << "cat 2 idea: " << cat2.getBrain()->getIdea(1) << std::endl;
	std::cout << "cat 2 brain address: " << (void *)(cat2.getBrain()) << std::endl;
	
	return 0;
}
