/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:07:49 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/06 19:47:24 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	doubled(int &x)
{
	x *= 2;
}

void	tripled(float &x)
{
	x *= 3;
}

int main(void)
{
	int tab[] = {10, 5, 2, 45, 42};
	float tab2[] = {1.2f, 15.25f, 20.0f, 1.50f, 2.2f};

	::iter(tab, 5, doubled);
	::iter(tab2, 5, tripled);
	
	for (int i = 0; i < 5; i++)
		std::cout << tab[i] << " ";
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << tab2[i] << " ";
	std::cout << std::endl;
	return (0);
}