/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:08:10 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/06 19:46:18 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#ifndef ITER_HPP
#define ITER_HPP

template<typename T, typename U, typename V>

void	iter(T *addr, U size, V f)
{
	for (int i = 0; i < size; i++)
		f(addr[i]);
}

#endif