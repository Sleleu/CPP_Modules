/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:49:06 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/27 19:00:46 by sleleu           ###   ########.fr       */
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
Zombie*	zombieHorde(int N, std::string name);

#endif