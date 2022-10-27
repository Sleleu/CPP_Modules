/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:50:50 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/27 18:38:00 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*new_zombie;
	
	randomChump("Alice");
	new_zombie = newZombie("Bob");
	std::cout << "Zombie on heap is named " << new_zombie->getName() << std::endl;
	new_zombie->announce();
	delete new_zombie;
	return (0);
}