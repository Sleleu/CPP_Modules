/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:09:25 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/15 17:03:12 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	///Animal test;
	std::cout << std::endl << "SUBJECT TEST :" << std::endl << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	
	std::cout << std::endl << "ARRAY TEST :" << std::endl << std::endl;
	Animal *array[4];

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	for (int i = 0; i < 4; i++)
		array[i]->makeSound();
	for (int i = 0; i < 4; i++)
		delete array[i];

	Dog dog1;
	std::cout << "TEST IDEAS" << std::endl;
	dog1.setIdeas("i like eat", 0);
	
	Dog dog2 = Dog(dog1);
	dog1.getIdeas(0);
	dog2.getIdeas(0);

	std::cout << "copy test : " << std::endl;
	dog1.setIdeas("i dont like eat anymore", 0);
	dog1.getIdeas(0);
	dog2.getIdeas(0);
	std::cout << std::endl;

	return (0);
}