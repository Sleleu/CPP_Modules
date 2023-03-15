/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:27:23 by sleleu            #+#    #+#             */
/*   Updated: 2023/03/15 21:05:35 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        try
        {
            PmergeMe merge(argv + 1);
        }
        catch (PmergeMe::parse_exception &e)
        {
            std::cerr << BOLDYELLOW << "Token [" << e.token() << "]: "
                      << BOLDRED << e.what() << RESET << std::endl;
        }
    }
    else
        std::cerr << BOLDRED << "Error: Bad arguments number" << RESET << std::endl;
    return (0);
}
