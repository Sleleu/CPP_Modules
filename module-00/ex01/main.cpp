/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:11:54 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/21 23:14:38 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <string>
#include "phonebook.hpp"

void	set_contact(char *dest, const char *message)
{
	std::string buffer;

	std::cout << message;
	std::cin >> buffer;
	buffer.copy(dest, buffer.size(), 0);
}

void	add_contact(PhoneBook *phonebook)
{
	int			i;
	std::string	buffer;
	
	for (i = 0; phonebook->contact[i].first_name[0] != '\0' && i < 7; i++);
	if (i == 7)
		phonebook->contact[i].resetContact();
	set_contact(phonebook->contact[i].first_name, "Enter first name : ");
	set_contact(phonebook->contact[i].last_name, "Enter last name : ");
	set_contact(phonebook->contact[i].nickname, "Enter nickname : ");
	std::cout << "Enter phone number : ";
	std::cin >> buffer;
	phonebook->contact[i].setNumber(buffer);
	std::cout << "Enter darkest secret : ";
	getline(std::cin, buffer);
	getline(std::cin, buffer);
	phonebook->contact[i].setSecret(buffer);
	phonebook->contact[i].index = i + 1;
}

void	display_info(PhoneBook *phonebook, int i)
{
	std::cout << "First name -> " << phonebook->contact[i].first_name << std::endl;
	std::cout << "Last name -> " << phonebook->contact[i].last_name << std::endl;
	std::cout << "Nickname -> " << phonebook->contact[i].nickname << std::endl;
	phonebook->contact[i].getNumber();
	phonebook->contact[i].getSecret();
}

void	display_truncate(char *str)
{
	for (int i = 0; i < 9; i++)
		std::cout << str[i];
	std::cout << ".|";
}

void	display_all(char *str)
{
	std::cout << str;
	for (int j = (10 - strlen(str)); j > 0; j--)
		std::cout << " "; 
	std::cout << "|";
}

void	search_contact(PhoneBook *phonebook)
{
	std::string	buffer;
	std::string message;
	
	int			i;
	
	if (phonebook->contact[0].first_name[0] == '\0')
	{
		std::cout << "No contact in the phonebook" << std::endl;
		return ;
	}
	for (i = 0; phonebook->contact[i].first_name[0] != '\0' && i < 8; i++)
	{
		std::cout << phonebook->contact[i].index << "         |";
		//std::cout << phonebook->contact[i].first_name;
		if (strlen(phonebook->contact[i].first_name) > 10)
			display_truncate(phonebook->contact[i].first_name);
		else
			display_all(phonebook->contact[i].first_name);
		if (strlen(phonebook->contact[i].last_name) > 10)
			display_truncate(phonebook->contact[i].last_name);
		else
			display_all(phonebook->contact[i].last_name);
		if (strlen(phonebook->contact[i].nickname) > 10)
			display_truncate(phonebook->contact[i].nickname);
		else
			display_all(phonebook->contact[i].nickname);
		std::cout << std::endl;
			
		// for (int j = (10 - strlen(phonebook->contact[i].first_name)); j > 0; j--)
		// 	std::cout << " "; 
		// std::cout << "|";
		// std::cout << phonebook->contact[i].last_name;
		// for (int j = (10 - strlen(phonebook->contact[i].last_name)); j > 0; j--)
		// 	std::cout << " "; 
		// std::cout << "|";
		// std::cout << phonebook->contact[i].nickname;
		// for (int j = (10 - strlen(phonebook->contact[i].nickname)); j > 0; j--)
		// 	std::cout << " "; 		
		// std::cout << "|";
		// std::cout << std::endl;
	}
	while (1)
	{
		std::cout << "Enter index of the contact : ";
	 	std::cin >> buffer;
		
		if (!buffer.compare("EXIT"))
			return ;
		else if (buffer.size() != 1 || buffer[0] < '1' + 0|| buffer[0] > i + 48)
		 	std::cout << "Invalid index" << std::endl;
		else
			break ;
	}
	i = buffer[0] - 48;
	display_info(phonebook, i - 1);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	buffer;

	for (int i = 0; i < 8; i++)
		phonebook.contact[i].resetContact();
	std::cout << std::endl << "    --    WELCOME TO PHONEBOOK    --    "
	<< std::endl << std::endl;
	while (42)
	{
		std::cout << "Phonebook > ";
		std::cin >> buffer;
		if (!buffer.compare("EXIT"))
			break ;
		else if (!buffer.compare("ADD"))
			add_contact(&phonebook);
		else if (!buffer.compare("SEARCH"))
			search_contact(&phonebook);
	}
	return (0);
}