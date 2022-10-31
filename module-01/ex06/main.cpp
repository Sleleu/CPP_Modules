/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 00:46:29 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/31 17:00:24 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	int		i;
	const char *array[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "bad argument"};
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	std::string arg = argv[1];
	for (i = 0; i < 5 && arg.compare(array[i]); i++);
	if (i == 5)
	{
		std::cout << "Bad usage, please use : DEBUG|INFO|WARNING|ERROR" << std::endl;
		return (1);
	}
	switch (i)
	{
		case 0:
			harl.complain("DEBUG");
			break;
		case 1:
			harl.complain("INFO");
			break;
		case 2:
			harl.complain("WARNING");
			break;
		case 3:
			harl.complain("ERROR");
			break;
	}
	return (0);
}