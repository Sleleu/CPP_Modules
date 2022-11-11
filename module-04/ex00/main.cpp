/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:09:25 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/11 15:27:44 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "Wrong animal tests :" << std::endl;
	const WrongAnimal* wanimal = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();
	std::cout << wcat->getType() << std::endl;
	wanimal->makeSound();
	wcat->makeSound();

	delete meta;
	delete i;
	delete j;
	delete wanimal;
	delete wcat;
	return (0);
}