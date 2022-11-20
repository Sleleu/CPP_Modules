/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:31:44 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/20 18:11:00 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: Form("unamed", 72, 45), _target("Unamed")
{
	std::cout << "RobotomyRequestForm default constructor called :";
	std::cout << "Target is set unamed by default" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	this->_target = src._target;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target)
: Form(name, 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm assign constructor called" << std::endl;
}

// Destructor

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

// Overload operator

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	this->_target = rhs._target;
	return (*this);
}

// Member function

void	RobotomyRequestForm::exec_form(void) const
{
	std::srand(std::time(NULL));

	std::cout << "VRRRRRvrrrVRRRvrrrrrVRRRRRR * drill noise *" << std::endl;
	if (std::rand() % 2 == 1)
		std::cout << this->_target << " was successfully robotomised !" << std::endl;
	else
		std::cout << "Robotomy of " << this->_target << " failed ..." << std::endl;
}