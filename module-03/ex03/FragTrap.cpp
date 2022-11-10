/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:10:45 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/10 17:41:43 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ScavTrap.hpp"
 #include "ClapTrap.hpp"
 #include "FragTrap.hpp"
 #include "DiamondTrap.hpp"

// CONSTRUCTORS

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hp = 100;
	this->_atk = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->_hp = src._hp;
	this->_mp = src._mp;
	this->_atk = src._atk;
}

FragTrap::FragTrap(const std::string name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_atk = 30;
}

// DESTRUCTOR

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

// OVERLOAD OPERATOR

FragTrap& FragTrap::operator=(const FragTrap &rhs)
{
	this->_hp = rhs._hp;
	this->_mp = rhs._mp;
	this->_atk = rhs._atk;

	return (*this);
}

// MEMBER FUNCTIONS

void	FragTrap::attack(const std::string& target)
{
	if (_hp == 0)
		return ;
	std::cout << "FragTrap " << _name << " attacks " << target;
	std::cout << " causing " << _atk << " points of damage !" << std::endl;
	this->_mp--;
}		

void	FragTrap::getHighFivesGuys()
{
	highFivesGuys();	
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " want to make a high fives !" << std::endl;
}
