/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:08:54 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/29 21:41:19 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

void	HumanB::setWeapon(Weapon weapon)
{
	*_weapon = weapon.getType();
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attack with their " << _weapon->getType() << std::endl;
}