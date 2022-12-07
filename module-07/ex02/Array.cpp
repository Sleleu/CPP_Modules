/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:07:09 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/07 19:15:16 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	std::cout << "Default constructor called" << std::endl;
	this->_array = new T[0];
	this->_size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Init constructor called" << std::endl;
	this->_array = new T[n];
	this->_size = n;
}

template<typename T>
Array<T>::Array(const Array<T> &src)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_array = new T[src._size];
	this->_size = src._size;
	for (int i = 0; i < this->_size; i++)
		this->_array[i] = src._array[i];
}

template<typename T>
Array<T>::~Array()
{
	std::cout << "Destructor called" << std::endl;
	delete [] this->_array;
}

template<typename T>
Array<T> & Array<T>::operator=(const Array<T> &rhs)
{
	if (this == &rhs)
		return (*this);
	delete [] this->_array;
	this->_array = new T[rhs._size];
	this->_size = rhs._size;
	for (int i = 0; i < this->_size; i++)
		this->_array[i] = rhs._array[i];
	return (*this);
}

template<typename T>
T & Array<T>::operator[](const int &index)
{
	if (index >= this->_size || index < 0 || this->_size == 0)
		throw (Array<T>::index_exception());
	return (this->_array[index]);
}

template<typename T>
int const & Array<T>::size(void) const
{
	return (this->_size);
}
