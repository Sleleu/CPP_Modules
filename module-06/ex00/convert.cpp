/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 03:46:47 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/02 18:41:41 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	convert_char(char c)
{
	std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	convert_int(int number)
{
	display_char(static_cast<double>(number));
    std::cout << "int: " << number << std::endl;
    std::cout << "float: " << static_cast<float>(number) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(number) << ".0" << std::endl;
}

void	convert_float(float number)
{
	int x = static_cast<int>(number);
	float res = number - x;
	display_char(static_cast<double>(number));
    std::cout << "int: ";
	if  (static_cast<double>(number) > INT_MAX || static_cast<double>(number) < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(number) << std::endl;
    std::cout << "float: " << number;
	if (res == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(number);
	if (res == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

void	convert_double(double number)
{
	int x = static_cast<int>(number);
	double res = number - x;
	
	display_char(number);
    std::cout << "int: ";
	if  (number > INT_MAX || number < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(number) << std::endl;
    std::cout << "float: " << static_cast<float>(number);
	if (res == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
    std::cout << "double: " << number;
	if (res == 0)
		std::cout << ".0";
	std::cout << std::endl;
}
