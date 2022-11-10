/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:31:24 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/10 20:42:38 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

// CONSTRUCTORS

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

// DESTRUCTOR

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

// OVERLOAD OPERATOR

Dog& Dog::operator=(const Dog &rhs)
{
	*this = rhs;
	
	return (*this);
}

// MEMBER FUNCTION

void	Dog::makeSound(void)
{
	std::cout << "Dog say : Wouaf" << std::endl;
}