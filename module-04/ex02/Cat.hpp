/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:15:01 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/11 16:18:16 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
# define CAT_HPP


class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &src);
		~Cat();
		Cat& 		operator=(const Cat &rhs);
		std::string	getType(void) const;
		void 		makeSound() const;
		
		protected:
			std::string type;
		
		private:
			Brain *_brain;
};

#endif