/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:51:34 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/31 18:56:05 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
	public:
	
	const std::string&	getType(void) const;
	void		setType(std::string type);

		Weapon(void);
		Weapon(std::string type);

	private:

	std::string _type;
};

#endif