/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:37:07 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/02 14:45:07 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		//Constructors
		Fixed(void);
		Fixed(const Fixed &copy);
	
		//Destructor
		~Fixed();

		//Member function
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		//Overload
		Fixed & operator=(Fixed const & n);

	private:
		int					_n;
		const static int	_bits;
		
};

#endif