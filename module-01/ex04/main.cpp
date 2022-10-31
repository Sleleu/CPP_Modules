/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:23:33 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/31 15:54:10 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <cstring>
#include <iostream>

int	main(int argc, char **argv)
{
	std::string		buffer;
	std::string		line;
	std::string		tmp;

	if (argc != 4)
	{
		std::cout << "Bad usage : [filename] [target] [replace]" << std::endl;
		return (1);
	}
	std::ifstream	src(argv[1]);
	if (!src.is_open())
	{
		std::cout << "File does not exist" << std::endl;
		return (1);
	}
	std::string		target = argv[2];
	std::string		to_insert = argv[3];
	std::ofstream	dest(strcat(argv[1], ".replace"));
	if (!dest.is_open())
		return (1);
	int pos = 0;
	while (getline(src, buffer))
	{
		while ((pos = buffer.find(target)) >= 0)
		{
			tmp = buffer.substr(0, buffer.find(target));
			line = line.append(tmp + to_insert);
			buffer = buffer.substr(pos + target.size());
		}
		line.append(buffer);
		dest << line;
		line.clear();
		if (!src.eof())
			dest << std::endl;
	}
	src.close();
	dest.close();
	return (0);
}