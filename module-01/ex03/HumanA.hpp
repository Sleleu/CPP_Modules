/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:58:13 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/29 21:38:53 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA
{

	public:

		void	attack(void) const;
		
		HumanA(std::string name, Weapon &weapon);
		
	private:
	
		std::string _name;
		Weapon &_weapon;
};

#endif