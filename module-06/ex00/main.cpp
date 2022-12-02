/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:26:13 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/02 03:51:45 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool	is_int(char *str)
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

bool	is_float(char *s)
{
	std::string str = s;

	if (str.find('.') == std::string::npos || str.find('f') == std::string::npos)
		return (false);
	else if (str.find('.') == 0 || str.find('.') == str.size() - 1 || str.find('f') != str.size() - 1)
		return (false);
	if (str.find('.') != str.rfind('.') || str.find('f') != str.rfind('f'))
		return (false);
	return (true);
}

bool	is_double(char *s)
{
	std::string str = s;

	if (str.find('.') == std::string::npos || str.find('.') == 0
		|| str.find('.') == str.size() - 1)
		return (false);
	if (str.find('.') != str.rfind('.'))
		return (false);
	return (true);
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (1);
    try
    {
        if (is_int(argv[1]))
            convert_int(atoi(argv[1]));
		else if (is_float(argv[1]))
			convert_float(atof(argv[1]));
		else
			convert_double(strtod(argv[1], NULL));
            
    }
    catch (std::exception &e)
    {
        std::cout << "Error" << std::endl;
        e.what();
    }
    // int x = std::atoi(argv[1]);
	//float x = std::numeric_limits<float>::infinity();

    return (0);
}

// strtol
// atoi / atol
// strtod