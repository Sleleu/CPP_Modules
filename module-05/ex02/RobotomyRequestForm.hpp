/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:38:09 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/20 18:02:55 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Form.hpp"

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &src);
		RobotomyRequestForm(const std::string name, const std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);
		void	exec_form(void) const;
		
	private:
		std::string _target;
};

#endif