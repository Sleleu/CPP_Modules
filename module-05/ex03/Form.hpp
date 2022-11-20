/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:57:11 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/20 21:10:18 by sleleu           ###   ########.fr       */
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
		virtual ~Form();
		
		Form& 				operator=(const Form &rhs);
		
		virtual void				beSigned(const class Bureaucrat &rhs);
		
		virtual const std::string	getName(void) const;
		virtual bool				getSigned(void) const;
		virtual unsigned int		getSignGrade(void) const;
		virtual unsigned int		getExecGrade(void) const;	
		virtual void				execute(Bureaucrat const &executor) const;
		virtual void				exec_form(void) const = 0;	
		
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

		class UnableToExecuteForm
		{
			public:
				virtual void what() const throw()
				{
					std::cout << "Unable to execute this form" << std::endl;
				}
		};

	private:
		const std::string		_name;
		bool					_signed;
		const unsigned int		_sign_grade;
		const unsigned int		_exec_grade;
};

std::ostream& operator<<(std::ostream &o, Form const &i);

#endif