/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:15:01 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/11 16:40:46 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

#ifndef DOG_HPP
# define DOG_HPP


class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &src);
		~Dog();
		Dog&		operator=(const Dog &rhs);
		std::string	getType(void) const;
		void		makeSound() const;

		protected:
			std::string type;
		
		private:
			Brain *_brain;
};

#endif