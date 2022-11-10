/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:11:48 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/10 19:38:09 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ScavTrap.hpp"
 #include "ClapTrap.hpp"
 #include "FragTrap.hpp"
 #include "DiamondTrap.hpp"

// CONSTRUCTORS

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hp = 100;
	this->_mp = 50;
	this->_atk = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->_hp = src._hp;
	this->_mp = src._mp;
	this->_atk = src._atk;
}

ScavTrap::ScavTrap(const std::string name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_mp = 50;
	this->_atk = 20;
}

// DESTRUCTOR

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

// OVERLOAD OPERATOR

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
	this->_hp = rhs._hp;
	this->_mp = rhs._mp;
	this->_atk = rhs._atk;

	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " enter in Gate Keeper state" << std::endl;
}

void	ScavTrap::getGuardGate()
{
	guardGate();
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hp == 0)
		return ;
	std::cout << "ScavTrap " << _name << " attacks " << target;
	std::cout << " causing " << _atk << " points of damage !" << std::endl;
	this->_mp--;
}