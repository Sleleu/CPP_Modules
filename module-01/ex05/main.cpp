/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 00:46:29 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/31 15:07:55 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;

	std::cout << "Level DEBUG" << std::endl;
	harl.complain("DEBUG");
	std::cout << "Level INFO" << std::endl;
	harl.complain("INFO");
	std::cout << "Level WARNING" << std::endl;
	harl.complain("WARNING");
	std::cout << "Level ERROR" << std::endl;
	harl.complain("ERROR");
	return (0);
}