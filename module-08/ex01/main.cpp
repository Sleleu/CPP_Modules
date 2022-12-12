/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:34:10 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/12 14:58:57 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span span(5);
	Span sp_negative(3);
	
	std::cout << "---- Standard test ----" << std::endl;
	try
	{	
		span.addNumber(6);
		span.addNumber(3);
		span.addNumber(17);
		span.addNumber(9);
		span.addNumber(11);

		span.display_vec();
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	

	std::cout << "---- Test with negatives values ----" << std::endl;
	try
	{
		sp_negative.addNumber(-45);
		sp_negative.addNumber(-1);
		sp_negative.addNumber(-4);

		sp_negative.display_vec();
		std::cout << sp_negative.shortestSpan() << std::endl;
		std::cout << sp_negative.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	
	// Span sp = Span(5);
	// sp.addRangeNumber(6);
	// sp.display_vec();
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	return (0);
}