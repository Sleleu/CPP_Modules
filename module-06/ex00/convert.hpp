/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 03:47:51 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/02 03:49:48 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <typeinfo>
#include <climits>
#include <limits>

bool	is_int(char *str);
bool	is_float(char *s);
bool	is_double(char *s);

void	convert_int(int number);
void	convert_float(float number);
void	convert_double(double number);