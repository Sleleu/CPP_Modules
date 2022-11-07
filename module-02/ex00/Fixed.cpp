/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:37:11 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/02 17:37:57 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

// Constructors

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_n = 0;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

// Destructor

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

// Overload

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_n = rhs.getRawBits();
	return *this;
}

// Member functions

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_n);
}

void	Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}
