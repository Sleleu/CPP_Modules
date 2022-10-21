/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:59:36 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/21 19:14:44 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <cstring>
#include <iostream>
#include "phonebook.hpp"

// CONSTRUCTOR

Contact::Contact(void)
{
	bzero(this->first_name, 10);
	bzero(this->last_name, 10);
	bzero(this->nickname, 10);
	bzero(this->_phone_number, 10);
	bzero(this->_secret, 100);
}

// DESTRUCTOR

Contact::~Contact(void)
{
	return ;
}

// GETTER

void	Contact::getSecret(void) const
{
	std::cout << this->_secret << std::endl;

	return ;
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

