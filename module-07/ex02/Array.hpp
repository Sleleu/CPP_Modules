/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:57:59 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/06 21:07:07 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
	private:

		T *_array;

	public:
	
		Array();
		Array(const Array &src);
		Array(unsigned int n);
		~Array();
};

#endif