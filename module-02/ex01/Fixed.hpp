/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:37:07 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/02 17:37:52 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		//Constructors
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed(int const i);
		Fixed(float const f);
	
		//Destructor
		~Fixed();

		//Member function
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		//Overload
		Fixed & operator=(Fixed const & n);

	private:
		int					_n;
		const static int	_bits;
		
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif