/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:19:17 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/10 17:08:04 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap &src);
		FragTrap(const std::string name);
		~FragTrap();

		FragTrap& operator=(const FragTrap &rhs);
		
		void	attack(const std::string& target);
		void	getHighFivesGuys();
		
	private:
		void	highFivesGuys(void);
};

#endif