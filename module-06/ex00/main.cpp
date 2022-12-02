/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:26:13 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/02 18:37:26 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

bool	is_char(std::string str)
{
	if (str.size() > 1)
		return (false);
	return (true);
}

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

bool	is_float(std::string str)
{
	for (int i = 0; str[i]; i++)
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f')
			return (false);
	if (str.find('.') == std::string::npos || str.find('f') == std::string::npos)
		return (false);
	else if (str.find('.') == 0 || str.find('.') == str.size() - 1 || str.find('f') != str.size() - 1)
		return (false);
	if (str.find('.') != str.rfind('.') || str.find('f') != str.rfind('f'))
		return (false);
	return (true);
}

bool	is_double(std::string str)
{
	for (int i = 0; str[i]; i++)
		if (!isdigit(str[i]) && str[i] != '.')
			return (false);
	if (str.find('.') == std::string::npos || str.find('.') == 0
		|| str.find('.') == str.size() - 1)
		return (false);
	if (str.find('.') != str.rfind('.'))
		return (false);
	return (true);
}

void	check_inf(std::string str)
{
	if (!str.compare("+inf") || !str.compare("-inf") || !str.compare("+inff")
		|| !str.compare("-inff") || !str.compare("inf") || !str.compare("inff"))
		display_inf(str);
	else if (!str.compare("nan") || !str.compare("nanf"))
		display_nan();
}

int main(int argc, char **argv)
{
	if (argc != 2)
		exit (1);
	std::string str = argv[1];
	check_inf(str);
	if (is_int(argv[1]))
		convert_int(atoi(argv[1]));
	else if	(is_char(argv[1]))
		convert_char(argv[1][0]);
	else if (is_float(argv[1]))
		convert_float(std::atof(argv[1]));
	else if (is_double(argv[1]))
		convert_double(std::atof(argv[1]));
	else
		std::cout << "Error" << std::endl;
    return (0);
}
