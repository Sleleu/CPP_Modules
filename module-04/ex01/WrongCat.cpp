/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:31:24 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/11 15:09:05 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

// CONSTRUCTORS

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

// DESTRUCTOR

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

// OVERLOAD OPERATOR

WrongCat& WrongCat::operator=(const WrongCat &rhs)
{
	*this = rhs;
	
	return (*this);
}

// MEMBER FUNCTION

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat say : Meow" << std::endl;
}

std::string WrongCat::getType(void) const
{
	return (this->type);
}