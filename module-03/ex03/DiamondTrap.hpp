/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:19:17 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/10 16:59:04 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap &src);
		DiamondTrap(const std::string name);
		~DiamondTrap();

		DiamondTrap& operator=(const DiamondTrap &rhs);
		
		void	attack(const std::string& target);
		void	getWhoAmI();
		
	private:
		void	whoAmI();
		std::string _name;
};

#endif