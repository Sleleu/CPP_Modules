/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:30:43 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/09 20:13:28 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &src);
		ClapTrap(const std::string name);
		~ClapTrap();
		
		ClapTrap& operator=(const ClapTrap &rhs);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	
	private:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_mp;
		unsigned int	_atk;
};

#endif