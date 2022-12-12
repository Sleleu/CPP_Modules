/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:34:50 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/12 14:50:13 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout << "Default constructor called" << std::endl;
	
}

Span::Span(unsigned int nb_max)
{
	std::cout << "Assign constructor called" << std::endl;
	this->_max = nb_max;
}

Span::Span(const Span &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
}

void	Span::addNumber(int nb)
{
	if (this->_vector.size() < this->_max)
		this->_vector.push_back(nb);
	else
		throw (Span::exception_max_capacity());
}

void	Span::addRangeNumber(unsigned int nb)
{
	int	res;
	std::srand(std::time(NULL));
	for (unsigned int i = 0; i < nb; i++)
	{
		res = rand() % (nb * 10);
		this->addNumber(res);
	}
}

unsigned int	Span::shortestSpan(void) const
{
	std::vector<int>::const_iterator it1;
	std::vector<int>::const_iterator it2;
	int	diff = INT_MAX;

	if (this->_vector.size() < 2)
		throw (Span::exception_size());
	for (it1 = this->_vector.begin(); it1 != this->_vector.end(); it1++)
		for (it2 = it1 + 1; it2 != this->_vector.end(); it2++)
			if (abs(*it1 - *it2) < diff)
				diff = abs(*it1 - *it2);
	return (diff);
}

unsigned int	Span::longestSpan(void) const
{
	std::vector<int>::const_iterator it1;
	std::vector<int>::const_iterator it2;
	int	diff = INT_MIN;

	if (this->_vector.size() < 2)
		throw (Span::exception_size());
	for (it1 = this->_vector.begin(); it1 != this->_vector.end(); it1++)
		for (it2 = it1 + 1; it2 != this->_vector.end(); it2++)
			if (abs(*it1 - *it2) > diff)
				diff = abs(*it1 - *it2);
	return (diff);
}

void	Span::display_vec(void) const
{
	std::vector<int>::const_iterator it;
	
	std::cout << "Vector content : ";
	for (it = this->_vector.begin(); it != this->_vector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

Span&	Span::operator=(const Span &rhs)
{
	this->_max = rhs._max;
	this->_vector = rhs._vector;

	return (*this);
}