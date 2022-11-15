/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:31:24 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/15 16:53:05 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

// CONSTRUCTORS

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = src.type;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdeas(src._brain->getIdeas(i), i);
}

// DESTRUCTOR

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

// OVERLOAD OPERATOR

Dog& Dog::operator=(const Dog &rhs)
{
	this->type = rhs.type;
	for (int i = 0; i < 100; i++)
		this->_brain->setIdeas(rhs._brain->getIdeas(i), i);
	return (*this);
}

// MEMBER FUNCTION

void	Dog::makeSound(void) const
{
	std::cout << "Dog say : Wouaf" << std::endl;
}

std::string	Dog::getType(void) const
{
	return (this->type);
}

void	Dog::getIdeas(int i) const
{
	std::cout << _brain->getIdeas(i) << std::endl;
}

void	Dog::setIdeas(std::string str, int i)
{
	if (i >= 0 && i < 100)
		_brain->setIdeas(str, i);
}