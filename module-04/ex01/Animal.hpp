/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:10:09 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/10 20:52:05 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal
{
	public:
		Animal();
		Animal(const Animal &src);
		~Animal();

		Animal& operator=(const Animal &rhs);
		void makeSound();
	protected:
		std::string type;
};

#endif