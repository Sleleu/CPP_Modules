/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:13:15 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/11 16:35:56 by sleleu           ###   ########.fr       */
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
	*this = src; 
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