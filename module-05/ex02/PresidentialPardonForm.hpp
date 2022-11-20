/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:45:51 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/20 16:46:57 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

class PresidentialPardonForm : public Form
{
	public:
		
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &src);
		~PresidentialPardonForm();
		PresidentialPardonForm(const std::string name, const std::string target);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);

		void				exec_form(void) const;

	private:
		
		std::string _target;
};

#endif