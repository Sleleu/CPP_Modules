/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:42:04 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/08 16:06:43 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	Point point(1234.43f, 2.50f);

	std::cout << "Test getter and float constructor" << std::endl;
	std::cout << "x = " << point.getPointX() << std::endl;
	std::cout << "y = " << point.getPointY() << std::endl;

	Point defaultpoint;

	std::cout << "Test default constructor" << std::endl;
	std::cout << "x = " << defaultpoint.getPointX() << std::endl;
	std::cout << "y = " << defaultpoint.getPointY() << std::endl;
	
	Point a(2, 5);
	Point b(1, 3);
	Point c(3, 3);
	Point p(2, 4);

	std::cout << "--- FIRST TRIANGLE TEST ---" << std::endl;
	if (bsp(a, b, c, p) == true)
		std::cout << "Point is in triangle" << std::endl;
	else
		std::cout << "Point is out of triangle" << std::endl;
	
	p = Point(1.5, 2.5);

	std::cout << "--- FIRST TRIANGLE TEST WITH POINT IN POSITION x(1.5) y(2.5) ---" << std::endl;
	if (bsp(a, b, c, p) == true)
		std::cout << "Point is in triangle" << std::endl;
	else
		std::cout << "Point is out of triangle" << std::endl;

	a = Point(4, 1);
	b = Point(7, 1);
	c = Point(5, 4);
	p = Point(4.2, 1.1);
	std::cout << "--- SECOND TRIANGLE TEST ---" << std::endl;
	if (bsp(a, b, c, p) == true)
		std::cout << "Point is in triangle" << std::endl;
	else
		std::cout << "Point is out of triangle" << std::endl;
	
	return (0);
}