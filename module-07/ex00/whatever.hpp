/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:32:18 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/06 18:08:58 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>

T const & max(T const &a, T const &b)
{
	if (a == b)
		return (b);
	return (a > b ? a : b);
}

template <typename T>
T const & min(T const &a, T const &b)
{
	if (a == b)
		return (b);
	return (a < b ? a : b);
}

template <typename T>
void swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

#endif