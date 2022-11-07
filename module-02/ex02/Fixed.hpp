/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:37:07 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/07 21:39:48 by sleleu           ###   ########.fr       */
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
		static Fixed	max(Fixed &fixed_a, Fixed &fixed_b);
		static Fixed	max(Fixed const &fixed_a, Fixed const &fixed_b);
		static Fixed	min(Fixed &fixed_a, Fixed &fixed_b);
		static Fixed	min(Fixed const &fixed_a, Fixed const &fixed_b);
		
		
		//Overload
		Fixed & operator=(Fixed const & rhs);
		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		bool operator<(Fixed const & rhs)const;
		bool operator>(Fixed const & rhs)const;
		bool operator<=(Fixed const & rhs)const;
		bool operator>=(Fixed const & rhs)const;
		bool operator==(Fixed const & rhs)const;
		bool operator!=(Fixed const & rhs)const;

	private:
		int					_n;
		const static int	_bits;
		
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif