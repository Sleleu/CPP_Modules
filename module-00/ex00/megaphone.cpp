/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:00:49 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/19 21:08:01 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; argv[i]; i++)
			for (int j = 0; argv[i][j]; j++)
				argv[i][j] = std::toupper(argv[i][j]);
		for (int i = 1; argv[i]; i++)
			std::cout << argv[i];
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}