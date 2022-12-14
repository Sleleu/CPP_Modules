/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:57:11 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/18 17:22:44 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	public:
		Form();
		Form(const Form &src);
		Form(const std::string name, const unsigned int sign_grade, const unsigned int exec_grade);
		~Form();
		
		Form& 				operator=(const Form &rhs);
		
		void				beSigned(const class Bureaucrat &rhs);
		
		const std::string	getName(void) const;
		bool				getSigned(void) const;
		unsigned int		getSignGrade(void) const;
		unsigned int		getExecGrade(void) const;
		
		
		class GradeTooHighException
		{
			public:
				virtual void what() const throw()
				{
					std::cout << "Grade too high to sign form" << std::endl;
				}		
		};

		class GradeTooLowException
		{
			public:
				virtual void what() const throw()
				{
					std::cout << "Grade too low to sign form" << std::endl;
				}
		};

	private:
		const std::string	_name;
		bool				_signed;
		const unsigned int		_sign_grade;
		const unsigned int		_exec_grade;
};

std::ostream& operator<<(std::ostream &o, Form const &i);

#endif