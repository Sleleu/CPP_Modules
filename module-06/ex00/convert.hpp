/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 03:47:51 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/03 15:45:30 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <typeinfo>
#include <climits>
#include <limits>

#ifndef CONVERT_HPP
# define CONVERT_HPP

bool	is_char(std::string str);
bool	is_int(char *str);
bool	is_float(std::string str);
bool	is_double(std::string str);

void	convert_char(char c);
void	convert_int(int number);
void	convert_float(float number);
void	convert_double(double number);

void	display_char(double number);
void	display_inf(std::string str);
void	display_nan(void);

#endif