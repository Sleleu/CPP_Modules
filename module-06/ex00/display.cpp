/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:26:36 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/02 18:31:57 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	display_char(double number)
{
	if (static_cast<int>(number) > 127 || static_cast<int>(number) < 0)
		std::cout << "char: impossible" << std::endl;
	else if (static_cast<int>(number) < 32 || (static_cast<int>(number) == 127))
		std::cout << "char: Non displayable" << std::endl;
	else
    	std::cout << "char: '" << static_cast<char>(number) << "'" << std::endl;
}

void	display_inf(std::string str)
{
	if (str[0] == '+')
		str = str.substr(1, str.size() - 1);
	std::cout << "char: impossible " << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str.find('f') == str.rfind('f'))
		str.append("f");
	std::cout << "float: " << str << std::endl;
	if (str.find('f') != str.rfind('f'))
		str.erase(str.size() - 1);
	std::cout << "double: " << str << std::endl;
	exit (0);
}

void	display_nan(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
	exit (0);
}