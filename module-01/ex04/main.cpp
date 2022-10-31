/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:23:33 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/31 00:33:33 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
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
	std::string 	name_dest = argv[1];
	name_dest.append(".replace");
	if (!src.is_open())
	{
		std::cout << "File does not exist" << std::endl;
		return (1);
	}
	std::ofstream	dest(name_dest);
	if (!dest.is_open())
		return (1);
	while (getline(src, buffer))
	{
		size_t pos = 0;
		while ((pos = buffer.find(argv[2])) != std::string::npos)
		{
			tmp = buffer.substr(0, buffer.find(argv[2])); // move to the occurrence
			line = line.append(tmp + argv[3]); // append to_insert in the line with content before occurrence
			buffer = buffer.substr(pos + strlen(argv[2])); // move in the buffer after the current occurrence
														   // to find the next occurrence
			//std::cout << tmp << "||" << line << "||" << buffer << std::endl;
		}
		line.append(buffer); // append the rest of the line if there is not occurrence left
		dest << line;
		line.clear();
		if (!src.eof()) // if we find and eof, we dont endl
			dest << std::endl;
	}
	src.close();
	dest.close();
	return (0);
}