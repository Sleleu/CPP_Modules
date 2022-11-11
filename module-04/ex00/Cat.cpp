/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:31:24 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/11 16:34:26 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

// CONSTRUCTORS

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

// DESTRUCTOR

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

// OVERLOAD OPERATOR

Cat& Cat::operator=(const Cat &rhs)
{
	this->type = rhs.type;
	return (*this);
}

// MEMBER FUNCTION

void	Cat::makeSound(void) const
{
	std::cout << "Cat say : Meow" << std::endl;
}

std::string	Cat::getType(void) const
{
	return (this->type);
}