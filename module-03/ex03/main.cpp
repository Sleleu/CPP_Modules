/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:18:45 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/09 21:31:22 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap a("Alice");
	ScavTrap b("Bob");
	FragTrap c("Charly");

	a.attack("Orc");
	b.attack("Goblin");
	c.attack("Paracetamol");

	b.beRepaired(30);
	c.beRepaired(30);

	b.getGuardGate();
	c.getHighFivesGuys();

	c.takeDamage(115);
	c.takeDamage(48);
	return (0);
}