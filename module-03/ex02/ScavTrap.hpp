/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:19:17 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/09 21:23:41 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &src);
		ScavTrap(const std::string name);
		~ScavTrap();

		ScavTrap& operator=(const ScavTrap &rhs);
		
		void	attack(const std::string& target);
		void	getGuardGate();
		
	private:
		void	guardGate();
};

#endif