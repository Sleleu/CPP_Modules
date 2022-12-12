/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:42:26 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/12 12:32:15 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <exception>

template<typename T>
void	easyfind(T var, int x)
{
	try
	{
		if (std::find(var.begin(), var.end(),  x) != var.end())
		{
			std::cout << "Occurence found for " << x << std::endl;
			return ;
		}
		throw(std::exception());
	}
	catch (std::exception &e)
	{
		std::cerr << "Occurence not found for " << x << std::endl;
	}
}