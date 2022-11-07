/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:48:08 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/07 22:05:59 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float fixed_x, const float fixed_y) : _x(fixed_x), _y(fixed_y)
{
	std::cout << "Const float constructor called" << std::endl;
	return ;
}

Point::Point(const Point &src)
{
	std::cout << "Copy constructor called" << std::endl;
	_x = src._x.getRawBits();
	_y = src._y.getRawBits();
}

Point::~Point()
{
	std::cout << "Destructor called" << std::endl;
}

Point & Point::operator=(Point const &rhs)
{
	this->_x = rhs._x;
	this->_y = rhs._y;
	return (*this);
}

Fixed	Point::getPointX()
{
	return (_x);
}

Fixed	Point::getPointY()
{
	return (_y);
}