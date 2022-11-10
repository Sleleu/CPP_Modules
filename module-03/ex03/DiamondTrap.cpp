/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:10:45 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/10 17:42:18 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ScavTrap.hpp"
 #include "ClapTrap.hpp"
 #include "FragTrap.hpp"
 #include "DiamondTrap.hpp"

// CONSTRUCTORS

DiamondTrap::DiamondTrap() : ClapTrap(), _name(ClapTrap::_name + "_clap_name")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->_hp = src._hp;
	this->_mp = src._mp;
	this->_atk = src._atk;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(), _name(ClapTrap::_name + "_clap_name")
{
	(void)name;
	std::cout << "DiamondTrap name constructor called" << std::endl;
	std::cout << "Stats of DiamondTrap " << _name << std::endl;
	std::cout << "HP " << _hp << " MP " << _mp << " ATK " << _atk << std::endl; 
}

// DESTRUCTOR

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

// OVERLOAD OPERATOR

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs)
{
	this->_hp = rhs._hp;
	this->_mp = rhs._mp;
	this->_atk = rhs._atk;

	return (*this);
}

// MEMBER FUNCTIONS

void	DiamondTrap::attack(const std::string& target)
{
	if (_hp == 0)
		return ;
	std::cout << "DiamondTrap " << _name << " attacks " << target;
	std::cout << " causing " << _atk << " points of damage !" << std::endl;
	this->_mp--;
}		

void	DiamondTrap::getWhoAmI()
{
	whoAmI();	
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << _name << " use WhoAmI !" << std::endl;
}
