/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:26:13 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/01 20:48:48 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <typeinfo>
#include <climits>
#include <limits>

bool is_int(char *str)
{
    if (atol(str) > INT_MAX || atol(str) < INT_MIN)
        return (false);
    for (int i = 0; str[i]; i++)
    {
        if (i == 0 && str[i] == '-')
            i++;
        else if (!isdigit(str[i]))
            return (false);
    }
    return (true);
}

void    convert_int(int number)
{
	if (number < 32 || number > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
    	std::cout << "char: '" << static_cast<char>(number) << "'" << std::endl;
    std::cout << "int: " << number << std::endl;
    std::cout << "float: " << static_cast<float>(number) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(number) << ".0" << std::endl;
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (1);
    try
    {
        if (is_int(argv[1]))
            convert_int(atoi(argv[1]));
		// else if (is_float[argv[1]])
		// 	convert_float(atof(argv[1]));
        // else
        //     throw (std::exception());
            
    }
    catch (std::exception &e)
    {
        std::cout << "Error" << std::endl;
        e.what();
    }
    // if (is_int(argv[1]))
    //     convert_int();
    // int x = std::atoi(argv[1]);
	float x = std::numeric_limits<float>::infinity();
	std::cout << x << std::endl;
    // std::string str = argv[1];

    return (0);
}

// strtol
// atoi / atol
// strtod