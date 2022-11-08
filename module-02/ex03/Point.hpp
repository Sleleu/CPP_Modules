/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 21:42:46 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/08 15:35:58 by sleleu           ###   ########.fr       */
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

		Fixed	getPointX() const;
		Fixed	getPointY() const;

	private:
	
	class Fixed _x;
	class Fixed	_y;
};

std::ostream & operator<<(std::ostream & o, Point const & i);

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif