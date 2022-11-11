/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:10:09 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/11 15:28:20 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		virtual ~WrongAnimal();

		WrongAnimal&	operator=(const WrongAnimal &rhs);
		std::string		getType(void) const;
		void			makeSound() const;
	
	protected:
		std::string type;
};

#endif