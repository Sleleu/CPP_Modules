/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:42:46 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/07 22:06:18 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#ifndef	POINT_HPP
# define POINT_HPP

class Point
{
	public:
	
	// Constructors
		Point(void);
		Point(const Point &src);
		Point(const float fixed_x, const float fixed_y);
	
	// Destructor
		~Point();
	
	// Overload
		Point & operator=(Point const & rhs);

	// Member functions

		Fixed	getPointX();
		Fixed	getPointY();

	private:
	
	class Fixed _x;
	class Fixed	_y;
};

#endif