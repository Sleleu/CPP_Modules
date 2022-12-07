/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:57:59 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/07 18:41:04 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
	private:

		T *_array;
		int	_size;

	public:

		Array();
		Array(const Array<T> &src);
		Array(unsigned int n);
		~Array();

		Array<T>&	operator=(const Array<T> &rhs);
		T &	operator[](const int &index);
		int const & size(void) const;
		class index_exception : public std::exception
		{
			public :
			virtual const char * what() const throw()
			{
				return ("Bad index");
			}
		};
};

#endif