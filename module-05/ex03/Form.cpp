/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:33:56 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/20 21:49:30 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

// Constructors

Form::Form() : _name("unamed"), _sign_grade(150), _exec_grade(150)
{
	std::cout << "Form default constructor called" << std::endl;
	std::cout << "Default sign grade and exec grade is set to 150" << std::endl;
	this->_signed = false;
}

Form::Form(const Form &src)
: _name(src._name), _sign_grade(src._sign_grade), _exec_grade(src._exec_grade)
{
	std::cout << "Form copy constructor called" << std::endl;
	this->_signed = src._signed;
}

Form::Form(const std::string name, const unsigned int sign_grade, const unsigned int exec_grade)
: _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	std::cout << "Form assign constructor called" << std::endl;
	this->_signed = false;
}

// Destructors

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

// Overload operators

Form& Form::operator=(const Form &rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}

std::ostream& operator<<(std::ostream &o, Form const &i)
{
	o << "Form name : " << i.getName();
	o << " | Status : ";
	if (i.getSigned() == true)
		o << "signed ";
	else
		o << "not signed ";
	o << "| Sign grade : " << i.getSignGrade();
	o << " | Exec grade : " << i.getExecGrade();
	return (o);
}

// Member functions

void	Form::beSigned(const class Bureaucrat &rhs)
{
	try
	{
		if (rhs.getGrade() <= this->_sign_grade)
			this->_signed = true;
		else if (rhs.getGrade() < 1)
			throw Form::GradeTooHighException();
		else
			throw Form::GradeTooLowException();
	}
	catch (Form::GradeTooLowException &e)
	{
		e.what();
	}
	catch (Form::GradeTooHighException &e)
	{
		e.what();
	}
}

void	Form::execute(Bureaucrat const &executor) const
{
	try
	{
		if (executor.getGrade() <= this->getExecGrade() && this->getSigned() == true)
		{
			exec_form();
		}
		else
			throw Form::UnableToExecuteForm();
	}
	catch (Form::UnableToExecuteForm &e)
	{
		e.what();
	}
}

// Getters / setters

const std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

unsigned int Form::getSignGrade(void) const
{
	return (this->_sign_grade);
}

unsigned int Form::getExecGrade(void) const
{
	return (this->_exec_grade);	
}