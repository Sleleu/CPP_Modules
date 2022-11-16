/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:49:40 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/16 19:49:12 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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