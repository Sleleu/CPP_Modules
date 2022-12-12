/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:41:54 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/07 23:29:59 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	print_int(int x)
{
	std::cout << x << " ";
}

int main(void)
{
	std::cout << "Test with list" << std::endl << std::endl;
	std::list<int>	lst;
	for (int i = 0; i < 5; i++)
		lst.push_back(i);
	easyfind(lst, 1);
	easyfind(lst, 16);

	std::cout << std::endl << "Test with vector" << std::endl << std::endl;
	std::vector<float> vec;
	for (int i = 0; i < 5; i++)
		vec.push_back(i);
	for (int i = 0; i < 7; i++)
		easyfind(vec, i);
	return (0);
}