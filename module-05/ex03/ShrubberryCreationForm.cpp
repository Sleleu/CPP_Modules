/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:17:58 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/20 19:41:13 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberryCreationForm.hpp"

ShrubberryCreationForm::ShrubberryCreationForm()
: Form("unamed", 145, 137), _target("unamed")
{
	std::cout << "ShrubberryCreationForm default constructor called" << std::endl;
	std::cout << "Target is set unamed by default" << std::endl;
}

ShrubberryCreationForm::ShrubberryCreationForm(const ShrubberryCreationForm &src)
{
	std::cout << "ShrubberryCreationForm copy constructor called" << std::endl;
	this->_target = src._target;
}

ShrubberryCreationForm::ShrubberryCreationForm(std::string name, std::string target)
: Form(name, 145, 137), _target(target)
{
	std::cout << "ShrubberryCreationForm assign constructor called" << std::endl;	
}

// Destructor

ShrubberryCreationForm::~ShrubberryCreationForm()
{
	std::cout << "ShrubberryCreationForm destructor called" << std::endl;
}

// Overload operator

ShrubberryCreationForm& ShrubberryCreationForm::operator=(const ShrubberryCreationForm &rhs)
{
	this->_target = rhs._target;
	return (*this);
}

// Member function

void	ShrubberryCreationForm::exec_form(void) const
{
	std::string str = _target;
	str.append("_shrubberry");
	std::ofstream o(str.c_str());

	int size_leaf = 30;
	int size_trunk = 15;

	for (int i = 0; i < size_leaf + 1; i++)
		o << " ";
	o << "/\\" << std::endl;
	for (int i = 0; i < size_leaf; i++)
	{
		for (int k = size_leaf; k - i > 0; k--)
				o << " ";
		o << "/";
		for (int j = -1; j < i; j++)
			if (j % 3 == 0)
				o << "#*";
			else
				o << "##";
		o << "\\";
		o << std::endl;
	}
	for (int i = 0; i < size_trunk; i++)
	{
		for (int j = (size_leaf / 3) * 2 - 1; j < size_leaf * 2 - (size_leaf / 3) * 2; j++)
			o << " ";
		for (int k = (size_leaf / 3) * 2; k < size_leaf * 2 - (size_leaf / 3) * 2; k++)
		{
			if (i % 3 == 0 || k % 2 == 0)
				o << "0";
			else
				o << "@";
		}
		if (i == size_trunk - 1)
			o << " sleleu was there";
		o << std::endl;
	}
	for (int i = 0; i < size_leaf; i++)
		o << "'`";
}