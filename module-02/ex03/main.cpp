/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:42:04 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/07 22:08:35 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	Point point(1234.4321f, 2.50f);

	std::cout << point.getPointX() << std::endl;
	std::cout << point.getPointY() << std::endl;

	Point defaultpoint;

	std::cout << defaultpoint.getPointX() << std::endl;
	std::cout << defaultpoint.getPointY() << std::endl;
	
	return (0);
}