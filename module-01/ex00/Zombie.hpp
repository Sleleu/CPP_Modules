/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 01:33:26 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/27 18:32:06 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
	public:

		void		announce(void);
		void		setName(std::string name);
		std::string getName(void) const;

				Zombie(void);
				~Zombie(void);

	private:

		std::string	_name;
};

// PROTOTYPE

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif