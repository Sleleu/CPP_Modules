/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:55:25 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/31 18:56:13 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

const std::string&	Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type; 
}
