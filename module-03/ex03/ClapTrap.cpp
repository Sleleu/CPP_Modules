/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:36:01 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/10 17:17:38 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ScavTrap.hpp"
 #include "ClapTrap.hpp"
 #include "FragTrap.hpp"
 #include "DiamondTrap.hpp"

// CONSTRUCTORS

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_name = "unamed";
	this->_hp = 10;
	this->_mp = 10;
	this->_atk = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->_hp = src._hp;
	this->_mp = src._mp;
	this->_atk = src._atk;
}

ClapTrap::ClapTrap(const std::string name)
{
	std::cout << "ClapTrap name constructor called" << std::endl;
	_name = name;
	this->_hp = 10;
	this->_mp = 10;
	this->_atk = 0;
}

// DESTRUCTOR

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

// OVERLOAD OPERATOR

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_hp = rhs._hp;
	this->_mp = rhs._mp;
	this->_atk = rhs._atk;

	return (*this);
}
	
// MEMBER FUNCTIONS

void	ClapTrap::attack(const std::string& target)
{
	if (_hp == 0)
		return ;
	std::cout << "ClapTrap " << _name << " attacks " << target;
	std::cout << " causing " << _atk << " points of damage !" << std::endl;
	this->_mp--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp == 0)
		return ;
	if (amount > _hp)
		_hp = 0;
	else
		_hp -= amount;
	std::cout << "ClapTrap " << _name << " take " << amount << " damage ";
	std::cout << "and have " << _hp << " hp now !" << std::endl;
	if (_hp == 0)
		std::cout << "ClapTrap " << _name << " is dead !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp == 0 || this->_mp == 0)
		return ;
	this->_mp--;
	this->_hp += amount;
	std::cout << "ClapTrap " << _name << " be repaired of " << amount << " hp and have ";
	std::cout << _hp << " hp and " << _mp << " mp now !" << std::endl;
}