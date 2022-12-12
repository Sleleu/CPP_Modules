/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:34:10 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/12 15:24:26 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span span(5);
	Span sp_negative(3);
	Span sp_little(1);
	Span sp_big(10);
	// Span sp_verybig(10000);

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

	std::cout << "---- Test with not enough values ----" << std::endl;
	try
	{
		sp_little.addNumber(42);

		sp_little.display_vec();
		std::cout << sp_little.shortestSpan() << std::endl;
		std::cout << sp_little.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	std::cout << "---- Test with too much values added ----" << std::endl;
	try
	{
		sp_big.addRangeNumber(10);
		sp_big.display_vec();
		sp_big.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	// std::cout << "---- Test with 10 000 values ----" << std::endl;
	// try
	// {
	// 	sp_verybig.addRangeNumber(10000);
	// 	sp_verybig.display_vec();
	// 	std::cout << sp_verybig.shortestSpan() << std::endl;
	// 	std::cout << sp_verybig.longestSpan() << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what();
	// }
	
	return (0);
}