/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:31:24 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/11 16:34:40 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

// CONSTRUCTORS

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

// DESTRUCTOR

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

// OVERLOAD OPERATOR

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->type = rhs.type;
	return (*this);
}

// MEMBER FUNCTION

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal say : Brrrbrrrrr" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}