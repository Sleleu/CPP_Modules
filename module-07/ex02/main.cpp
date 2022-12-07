/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:57:20 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/07 19:11:03 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.cpp"

int	main(void)
{
	Array<float> void_test;
	Array<int> test(5);
	Array<std::string> test_char(2);
	test[0] = 42;
	test[1] = 10;
	test[2] = 14;
	test[3] = 200;
	test[4] = 4;

	test_char[0] = "salut";
	test_char[1] = "yo";
	for (int i = 0; i < test.size(); i++)
		std::cout << test[i] << " ";
	std::cout << std::endl;

	std::cout << test_char[0] << " " << test_char[1] << std::endl;
	try
	{
		std::cout << void_test[0] << std::endl;
		std::cout << test_char[20] << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "size of void_test : " << void_test.size() << std::endl;
	std::cout << "size of test : "<< test.size() << std::endl;
	std::cout << "size of test_char : "<< test_char.size() << std::endl;

	Array<int> copy(test);
	for (int i = 0; i < copy.size(); i++)
		std::cout << copy[i] << " ";
	std::cout << std::endl;

	copy[0] = 52;
	copy[1] = 500;
	copy[2] = 545;
	for (int i = 0; i < copy.size(); i++)
		std::cout << copy[i] << " ";
	std::cout << std::endl;
	
	for (int i = 0; i < test.size(); i++)
		std::cout << test[i] << " ";
	std::cout << std::endl;
	return (0);
}