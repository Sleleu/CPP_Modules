/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:34:53 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/12 20:51:20 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <exception>
#include <climits>
#include <ctime>

#ifndef SPAN_HPP
# define SPAN_HPP

class Span
{
	public:

		Span();
		Span(unsigned int N);
		Span(const Span &src);
		~Span();
		
		void			addNumber(int nb);
		void			addRangeNumber(unsigned int nb);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;
		void			display_vec(void) const;
		Span &			operator=(const Span &rhs);

		class exception_max_capacity : public std::exception
		{
			public:
			
			virtual const char * what() const throw()
			{
				return ("Max capacity\n");
			}
		};

		class exception_size : public std::exception
		{
			public:

			virtual const char * what() const throw()
			{
				return ("Not enough values to compare\n");
			}	
		};

	private:

		std::vector<int>	_vector;
		unsigned int		_max;
};

#endif