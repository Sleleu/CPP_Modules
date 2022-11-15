/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:10:09 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/15 17:01:50 by sleleu           ###   ########.fr       */
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
		virtual ~Animal();

		Animal& 	operator=(const Animal &rhs);

		virtual void		makeSound() const = 0;
		virtual std::string	getType(void) const;

	protected:
		std::string type;
};

#endif