/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:31:24 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/11 16:42:27 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

// CONSTRUCTORS

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

// DESTRUCTOR

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

// OVERLOAD OPERATOR

Animal& Animal::operator=(const Animal &rhs)
{
	this->type = rhs.type;
	return (*this);
}

// MEMBER FUNCTION

void	Animal::makeSound() const
{
	std::cout << "Animal say : Brrrbrrrrr" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}