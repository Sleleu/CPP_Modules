/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 01:43:59 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/27 18:37:12 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	new_zombie;
	
	new_zombie.setName(name);
	std::cout << "Hello ! i'm " << new_zombie.getName() << std::endl;
	
	new_zombie.announce();
	return ;
}