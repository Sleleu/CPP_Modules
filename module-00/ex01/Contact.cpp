/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:59:36 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/24 18:38:05 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void	Contact::resetContact(void)
{
	_first_name.clear();
	_last_name.clear();
	_nickname.clear();
	_phone_number.clear();
	_secret.clear();
}

std::string	Contact::selectData(std::string message)
{
	std::string	buffer;

	while (buffer.size() == 0)
	{
		std::cout << message;
		if (!getline(std::cin, buffer))
			return (buffer);
		if (!message.compare("Enter phone number : "))
		{
			for (int i = 0; buffer[i]; i++)
			{
				if (!isdigit(buffer[i]))
				{
					std::cout << "Invalid phone number" << std::endl;
					buffer.clear();	
					break ;
				}
			}
		}
	}
	return (buffer);
}

void	Contact::setData(int index)
{
	std::string	buffer;

	this->_first_name.assign(selectData("Enter first name : "));
	this->_last_name.assign(selectData("Enter last name : "));
	this->_nickname.assign(selectData("Enter nickname : "));
	this->_phone_number.assign(selectData("Enter phone number : "));
	this->_secret.assign(selectData("Enter secret : "));
	this->_index = index + 1;
}

void	Contact::display_truncate(std::string str) const
{
	for (int i = 0; i < 9; i++)
		std::cout << str[i];
	std::cout << ".|";
}

void	Contact::display_all(std::string str) const
{
	std::cout << str;
	for (int j = (10 - str.size()); j > 0; j--)
		std::cout << " ";
	std::cout << "|";
}

void	Contact::display_info(void) const
{
	std::cout << "First name   || " << this->_first_name << std::endl;
	std::cout << "Last name    || " << this->_last_name << std::endl;
	std::cout << "Nickname     || " << this->_nickname << std::endl;
	std::cout << "Phone Number || " << this->_phone_number << std::endl;
	std::cout << "Secret       || " << this->_secret << std::endl;
}

int		Contact::getData(void)
{
	if (this->_first_name[0] == '\0')
	 	return (-1);
	std::cout << this->_index << "         |";
	if (this->_first_name.size() > 10)
		this->display_truncate(_first_name);
	else
		this->display_all(_first_name);
	if (this->_last_name.size() > 10)
		this->display_truncate(_last_name);
	else
		this->display_all(_last_name);
	if (this->_nickname.size() > 10)
		this->display_truncate(_nickname);
	else
		this->display_all(_nickname);
	std::cout << std::endl;
	return (0);
}
