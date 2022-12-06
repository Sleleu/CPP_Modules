/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:07:09 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/06 21:41:57 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	std::cout << "Default constructor called" << std::endl;
	this->_array<T> = new;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Init constructor called" << std::endl;
	this->_array = new[n];
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Destructor called" << std::endl;
}

template <typename T>
Array<T> & Array<T>::operator=(const Array<T> &rhs)
{
	std::cout << "test" << std::endl;
	this->_array = rhs->_array;
}

template <typename T>
void	Array<T>::size(void) const
{
	int i = 0;

	while (1)
	{
		try
		{
			
		}
		catch
	}
}