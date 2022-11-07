/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:37:11 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/07 21:39:36 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

// Constructors

Fixed::Fixed(void)
{
	//std::cout << "Default constructor called" << std::endl;
	_n = 0;
}

Fixed::Fixed(const Fixed &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	_n = src.getRawBits();
}

Fixed::Fixed(int i)
{
	//std::cout << "Int constructor called" << std::endl;
	_n = i * pow(2, _bits);
}

Fixed::Fixed(float f)
{
	//std::cout << "Float constructor called" << std::endl;
	_n = roundf(f * pow(2, _bits));
}

// Destructor

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}

// Overload

Fixed & Fixed::operator=(Fixed const & rhs)
{
	//std::cout << "Copy assignement operator called" << std::endl;
	this->_n = rhs._n;
	return (*this);
}

std::ostream & operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}

// ARITHMETIC OVERLOAD

Fixed	Fixed::operator+(Fixed const & rhs) const
{
    return (this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
    return (this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
    return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
    return (this->toFloat() / rhs.toFloat());
}

// INCREMENT / DECREMENT OVERLOAD

Fixed Fixed::operator++(void)
{
	Fixed temp;
	temp._n = ++_n;
	return (temp);
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
	temp._n = _n++;
	return (temp);
}

Fixed Fixed::operator--(void)
{
	Fixed temp;
	temp._n = --_n;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp;
	temp._n = _n--;
	return (temp);
}

// COMPARISON OVERLOAD

bool	Fixed::operator<(Fixed const & rhs) const
{
	if (this->_n < rhs._n)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	if (this->_n > rhs._n)
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	if (this->_n <= rhs._n)
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	if (this->_n >= rhs._n)
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	if (this->_n == rhs._n)
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	if (this->_n < rhs._n)
		return (true);
	else
		return (false);
}

// Member functions

float	Fixed::toFloat(void) const
{
	return (((float)_n / pow(2, _bits)));
}

int		Fixed::toInt(void) const
{
	return (((int)_n / pow(2, _bits)));
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (_n);
}

void	Fixed::setRawBits(int const raw)
{
	this->_n = raw;
}

Fixed	Fixed::max(Fixed &fixed_a, Fixed &fixed_b)
{
	if (fixed_a > fixed_b)
		return (fixed_a);
	else
		return (fixed_b);
}

Fixed	Fixed::max(Fixed const &fixed_a, Fixed const &fixed_b)
{
	if (fixed_a > fixed_b)
		return (fixed_a);
	else
		return (fixed_b);
}

Fixed	Fixed::min(Fixed &fixed_a, Fixed &fixed_b)
{
	if (fixed_a < fixed_b)
		return (fixed_a);
	else
		return (fixed_b);
}

Fixed	Fixed::min(Fixed const &fixed_a, Fixed const &fixed_b)
{
	if (fixed_a < fixed_b)
		return (fixed_a);
	else
		return (fixed_b);
}