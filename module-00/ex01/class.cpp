/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:59:36 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/21 22:39:47 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>
#include "phonebook.hpp"

// CONSTRUCTOR

Contact::Contact(void)
{
	return ;
}

// DESTRUCTOR

Contact::~Contact(void)
{
	return ;
}

// GETTER

void	Contact::getSecret(void) const
{
	std::cout << "Darkest secret -> " << this->_secret << std::endl;
	return ;
}

void	Contact::getNumber(void) const
{
	std::cout << "Phone number -> " << this->_phone_number << std::endl;
	return ;
}

void	Contact::resetContact(void)
{
	bzero(this->first_name, 10);
	bzero(this->last_name, 10);
	bzero(this->nickname, 10);
	bzero(this->_phone_number, 10);
	bzero(this->_secret, 100);
}

// SETTER

void	Contact::setSecret(std::string buffer)
{
	buffer.copy(_secret, buffer.size(), 0);
	return ;
}

void	Contact::setNumber(std::string buffer)
{
	buffer.copy(_phone_number, buffer.size(), 0);
	return ;
}

