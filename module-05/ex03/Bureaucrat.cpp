/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:49:40 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/20 21:50:52 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// Constructors

Bureaucrat::Bureaucrat() : _name("unamed"), _grade(150)
{
	std::cout << "Default constructor called" << std::endl;	
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade)
{
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	std::cout << "Assign constructor called" << std::endl;
	try
	{
		if (getGrade() < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (getGrade() > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		e.what();
		this->_grade = 150;
		std::cout << "Bureaucrat " << getName() << " is now set to default grade : 150" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		e.what();
		this->_grade = 150;
		std::cout << "Bureaucrat " << getName() << " is now set to default grade : 150" << std::endl;
	}
}

// Destructor

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
}

// Overload operator

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

std::ostream& operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ", Bureaucrat grade " << i.getGrade();
	return (o);
}

// Member functions

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::bePromoted()
{
	try
	{
		if (getGrade() <= 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		e.what();
	}
}

void	Bureaucrat::beRetrograded()
{
	try
	{
		if (getGrade() >= 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		e.what();
	}
}

void	Bureaucrat::signForm(const class Form &form) const
{
	try
	{
		if (form.getSigned() == true && this->getGrade() <= form.getSignGrade())
			std::cout << this->getName() << " signed " << form.getName() << std::endl;
		else if (this->getGrade() < 1)
			throw Form::GradeTooHighException();
		else
			throw Form::GradeTooLowException();
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because : ";
		e.what();
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because : ";
		e.what();
	}
}

void	Bureaucrat::executeForm(Form const &form) const
{
	try
	{
		if (this->getGrade() <= form.getExecGrade() && form.getSigned() == true)
			{
				std::cout << this->getName() << " executed " << form.getName() << std::endl;
				form.execute(*this);
			}
		else
			throw FailedToExecuteForm();
	}
	catch (Bureaucrat::FailedToExecuteForm &e)
	{
		e.what();
		std::cout << ", reason : ";
		try
		{
			if (this->getGrade() > form.getExecGrade())
				throw GradeTooLowException();
			else if (form.getSigned() == false)
				std::cout << "form is not signed" << std::endl;
			else
				throw GradeTooHighException();
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			e.what();
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			e.what();
		}
	}
}