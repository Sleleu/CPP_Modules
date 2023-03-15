/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:08:48 by sleleu            #+#    #+#             */
/*   Updated: 2023/03/15 20:11:47 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cerr << BOLDRED << "Error: bad argument number" << RESET << std::endl, 1);
	try
	{
		BitcoinExchange btc(argv[1]);
	}
    catch (BitcoinExchange::parse_exception &e)
    {
		if (e.line() != -1)
			std::cerr << BOLDYELLOW << "line [" << e.line() << "]: ";
        std::cerr << BOLDRED << e.what() << RESET << std::endl;
    }
	return (0);
}