/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:41:41 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/08 16:03:29 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	vector_result(Point v1, Point v2, Point p)
{
	Fixed result;

	result = ((v1.getPointX() - p.getPointX()) * (v2.getPointY() - p.getPointY()) 
	- (v1.getPointY() - p.getPointY()) * (v2.getPointX() - p.getPointX()));

	return (result); 
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	result_1 = vector_result(c, a, point);
	Fixed	result_2 = vector_result(a, b, point);
	Fixed	result_3 = vector_result(b, c, point);

	//std::cout << result_1 << " " << result_2 << " " << result_3 << std::endl;
	if ((result_1 >= 0 && result_2 >= 0 && result_3 >= 0))
		return (true);
	else if ((result_1 <= 0 && result_2 <= 0 && result_3 <= 0))
		return (true);

	return (false);
}