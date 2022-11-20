/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:15:36 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/20 19:42:20 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Form.hpp"

#ifndef SHRUBBERRYCREATIONFORM_HPP
# define SHRUBBERRYCREATIONFORM_HPP

class ShrubberryCreationForm : public Form
{
	public:

		ShrubberryCreationForm();
		ShrubberryCreationForm(const ShrubberryCreationForm &src);
		ShrubberryCreationForm(std::string name, std::string target);
		~ShrubberryCreationForm();
		ShrubberryCreationForm& operator=(const ShrubberryCreationForm &rhs);
		void	exec_form(void) const;

	private:
		
		std::string _target;
};

#endif