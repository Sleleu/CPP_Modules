/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:31:24 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/15 16:54:58 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

// CONSTRUCTORS

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = src.type;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdeas(src._brain->getIdeas(i), i);
}

// DESTRUCTOR

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

// OVERLOAD OPERATOR

Cat& Cat::operator=(const Cat &rhs)
{
	this->type = rhs.type;
	for (int i = 0; i < 100; i++)
		this->_brain->setIdeas(rhs._brain->getIdeas(i), i);
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

void	Cat::getIdeas(int i) const
{
	std::cout << _brain->getIdeas(i) << std::endl;
}

void	Cat::setIdeas(std::string str, int i)
{
	if (i >= 0 && i < 100)
		_brain->setIdeas(str, i);
}