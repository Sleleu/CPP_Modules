/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:30:00 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/07 21:38:17 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl << "other tests" << std::endl;
	Fixed c(1);
	std::cout << "decrement postfix " << c-- << " result  here >> " << c << std::endl;
	std::cout << "decrement prefix here >> " << --c << std::endl;
	c = Fixed(1);
	std::cout << "operator overloading for addition : "<< c + c << std::endl;
	std::cout << "operator overloading for division : " << c / (c + c) << std::endl;
	std::cout << "operator overloading for multiplication : " << (c + c) * (c + c) << std::endl;
	if (c < b)
		std::cout << "operator overloading for inferior comparison : " << "c < b" << std::endl;
	if (c == b)
		std::cout << "operator overloading for equal comparison : " << "c == b" << std::endl;
	else
		std::cout << "operator overloading for equal comparison : " << "c is not equal to b" << std::endl;
	if (c != b)
		std::cout << "operator overloading for different comparison : " << "c is different to b" << std::endl;
	std::cout << "Test member function min : " << Fixed::min(c, b) << std::endl;
return 0;
}