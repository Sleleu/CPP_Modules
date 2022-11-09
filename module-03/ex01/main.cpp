/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:48:01 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/09 21:01:17 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a("Alice");
	ClapTrap b("Bob");

	a.attack("Orc");
	b.attack("Goblin");
	
	a.getGuardGate();

	return (0);
}