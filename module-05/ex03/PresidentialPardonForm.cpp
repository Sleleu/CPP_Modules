/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:46:08 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/20 17:43:33 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

// Constructors

PresidentialPardonForm::PresidentialPardonForm()
: Form("unamed", 25, 5), _target("unamed")
{
	std::cout << "PresidentialPardonForm default constructor called : ";
	std::cout << "Target is set unamed by default" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	this->_target = src._target;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target)
: Form(name, 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm assign constructor called" << std::endl;
}

// Destructor

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

// Overload operator

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	this->_target = rhs._target;
	return (*this);
}

// Member function

void	PresidentialPardonForm::exec_form(void) const
{
	std::cout << this->_target << " was forgiven by Zaphod Beeblebrox" << std::endl;
}