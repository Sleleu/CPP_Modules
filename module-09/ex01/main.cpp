/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:15:39 by sleleu            #+#    #+#             */
/*   Updated: 2023/03/15 20:18:32 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	Rpn rpn;

	if (argc != 2)
		return (std::cerr << "Error: bad argument number" << std::endl, 1);		
	std::string result = rpn.calcul(argv[1]);	
	std::cout << result << std::endl;
	return (0);
}