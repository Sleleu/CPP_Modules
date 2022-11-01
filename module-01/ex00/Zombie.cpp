/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 01:36:06 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/31 18:54:25 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// CONSTRUCTOR

Zombie::Zombie(void)
{
	std::cout << "A new Zombie is born !" << std::endl;
}

// DESTRUCTOR

Zombie::~Zombie(void)
{
	std::cout << this->_name << " is dead !" << std::endl;
}

// SETTER

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

// GETTER

std::string	Zombie::getName(void) const
{
	return (this->_name);
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}