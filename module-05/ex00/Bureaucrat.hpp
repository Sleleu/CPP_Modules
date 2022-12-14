/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:45:10 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/17 17:30:13 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat(const std::string name, unsigned int grade);
		~Bureaucrat();
		Bureaucrat&			operator=(const Bureaucrat &rhs);
		const std::string	getName() const;
		unsigned int		getGrade() const;
		void				bePromoted();
		void				beRetrograded();
		
		class GradeTooHighException
		{
			public:
				virtual void what() const throw()
				{
					std::cout << "Grade too high" << std::endl;
				}
		};

		class GradeTooLowException
		{
			public:
				virtual void what() const throw()
				{
					std::cout << "Grade too low" << std::endl;
				}
		};

	private:
		const std::string _name;
		unsigned int	  _grade;
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const &i);

#endif