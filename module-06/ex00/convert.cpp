/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 03:46:47 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/02 03:55:54 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	convert_int(int number)
{
	if (number < 32 || number == 127)
		std::cout << "char: Non displayable" << std::endl;
	else if (number > 127)
		std::cout << "char: impossible" << std::endl;
	else
    	std::cout << "char: '" << static_cast<char>(number) << "'" << std::endl;
    std::cout << "int: " << number << std::endl;
    std::cout << "float: " << static_cast<float>(number) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(number) << ".0" << std::endl;
}

void	convert_float(float number)
{
	int x = static_cast<int>(number);
	float res = number - x;
	
	if (static_cast<int>(number) < 32 || static_cast<int>(number) > 126)
		std::cout << "char: Non displayable" << std::endl;
	else if (static_cast<int>(number) > 127)
		std::cout << "char: impossible" << std::endl;
	else
    	std::cout << "char: '" << static_cast<char>(number) << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(number) << std::endl;
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
	
	if (static_cast<int>(number) < 32 || static_cast<int>(number) > 126)
		std::cout << "char: Non displayable" << std::endl;
	else if (static_cast<int>(number) > 127)
		std::cout << "char: impossible" << std::endl;
	else
    	std::cout << "char: '" << static_cast<char>(number) << "'" << std::endl;
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