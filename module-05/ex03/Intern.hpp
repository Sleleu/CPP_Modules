/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:52:42 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/20 21:20:39 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberryCreationForm.hpp"

#ifndef INTERN_HPP
# define INTERN_HPP

class Intern
{
	public:

		Intern();
		Intern(const Intern &src);
		~Intern();

		Intern& operator=(const Intern &rhs);
		Form*	makeForm(std::string name, std::string target);

		class ErrorForm
		{
				virtual const char* what() const throw()
				{
					return ("YOOOOOO");
				}
		};
		
};

#endif