/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:07:54 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/09 20:10:18 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("Alice");
	ClapTrap b("Bob");
	a.takeDamage(5);
	b.takeDamage(2);

	ClapTrap c;

	c.takeDamage(10);
	a.beRepaired(2);
	b.attack("Goblin");
	b.takeDamage(52);
	b.beRepaired(5);
	b.takeDamage(50);
	b.attack("Goblin");
	return (0);
}