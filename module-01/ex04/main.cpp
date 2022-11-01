/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:23:33 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/31 19:11:33 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <cstring>
#include <iostream>

int	check_arg(int argc, char **argv, std::ifstream &src)
{
	if (argc != 4)
	{
		std::cout << "Bad usage : [filename] [target] [replace]" << std::endl;
		return (1);
	}
	if (argv[2][0] == '\0')
	{
		std::cout << "occurrence to replace is empty" << std::endl; 
		return (1);
	}
	src.open(argv[1]);
	if (!src.is_open())
	{
		std::cout << "File does not exist" << std::endl;
		return (1);
	}
	return (0);
}

void	set_newline(std::string &buffer, std::string &line, std::string &target, std::string &to_insert)
{
	int			pos = 0;
	std::string tmp;
	
	while ((pos = buffer.find(target)) >= 0)
	{
		tmp = buffer.substr(0, buffer.find(target));
		line = line.append(tmp + to_insert);
		buffer = buffer.substr(pos + target.size());
	}
	line.append(buffer);
}

int	main(int argc, char **argv)
{
	std::string		buffer;
	std::string		line;
	std::ifstream	src;

	if (check_arg(argc, argv, src))
		return (1);
	std::string		target = argv[2];
	std::string		to_insert = argv[3];
	std::ofstream	dest(strcat(argv[1], ".replace"));
	if (!dest.is_open())
		return (1);
	while (getline(src, buffer))
	{
		set_newline(buffer, line, target, to_insert);
		dest << line;
		line.clear();
		if (!src.eof())
			dest << std::endl;
	}
	src.close();
	dest.close();
	return (0);
}