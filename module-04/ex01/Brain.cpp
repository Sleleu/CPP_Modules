/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:13:15 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/15 16:49:00 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// CONSTRUCTORS

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i]; 
}

// DESTRUCTOR

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

// OVERLOAD OPERATOR

Brain& Brain::operator=(const Brain &rhs)
{
	*this->ideas = *rhs.ideas;
	return (*this);
}

std::string	Brain::getIdeas(int i) const
{
	return (ideas[i]);
}

void	Brain::setIdeas(std::string src, int i)
{
	this->ideas[i] = src;
}