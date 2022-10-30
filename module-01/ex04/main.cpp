/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:23:33 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/30 21:08:53 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	std::string		buffer;
	std::fstream	src;
	std::ofstream	dest("test.replace");

	if (argc != 4)
	{
		std::cout << "Bad arguments" << std::endl;
		return (1);
	}
	src.open(argv[1]);
	if (!src.is_open())
	{
		std::cout << "File does not exist" << std::endl;
		return (1);
	}
	while (getline(src, buffer))
	{
		
		dest << src;
	}
	src.close();
	return (0);
}