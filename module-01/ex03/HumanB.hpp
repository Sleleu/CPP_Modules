/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:58:13 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/29 21:41:07 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB
{

	public:

		void	attack(void) const;
		void	setWeapon(Weapon weapon);

		HumanB(std::string name);
		
	private:
	
		std::string _name;
		Weapon *_weapon;
};

#endif