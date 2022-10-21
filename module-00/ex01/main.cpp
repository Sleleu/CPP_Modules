/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:11:54 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/21 20:03:42 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
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
	
	for (i = 0; phonebook->contact[i].first_name[0] != '\0'; i++);
	set_contact(phonebook->contact[i].first_name, "Enter first name : ");
	set_contact(phonebook->contact[i].last_name, "Enter last name : ");
	set_contact(phonebook->contact[i].nickname, "Enter nickname : ");
	std::cout << "Enter phone number : ";
	std::cin >> buffer;
	phonebook->contact[i].setNumber(buffer);
	std::cout << "Enter darkest secret : ";
	std::cin >> buffer;
	phonebook->contact[i].setSecret(buffer);
	phonebook->contact[i].index = i + 1;
}

void	search_contact(PhoneBook phonebook)
{
	std::string	buffer;
	int	i;
	
	if (phonebook.contact[0].first_name[0] == '\0')
	{
		std::cout << "No contact in the phonebook" << std::endl;
		return ;
	}
	for (i = 0; phonebook.contact[i].first_name[0] != '\0'; i++)
	{
		std::cout << phonebook.contact[i].index << "         |";
		std::cout << phonebook.contact[i].first_name;
		for (int j = (10 - strlen(phonebook.contact[i].first_name)); j > 0; j--)
			std::cout << " "; 
		std::cout << "|";
		std::cout << phonebook.contact[i].last_name;
		for (int j = (10 - strlen(phonebook.contact[i].last_name)); j > 0; j--)
			std::cout << " "; 
		std::cout << "|";
		std::cout << phonebook.contact[i].nickname;
		for (int j = (10 - strlen(phonebook.contact[i].nickname)); j > 0; j--)
			std::cout << " "; 		
		std::cout << "|";
		std::cout << std::endl;
	}
	while (1)
	{
		std::cout << "Enter index of the contact : ";
	 	std::cin >> buffer;
		// if (std::stoi(buffer, NULL, 10) < 1 || std::stoi(buffer, NULL, 10) > i)
		// 	std::cout << "Invalid index" << std::endl;
		// else
			break ;
	}
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	buffer;

	std::cout << std::endl << "    --    WELCOME TO PHONEBOOK    --    "
	<< std::endl << std::endl;
	while (42)
	{
		std::cout << "Phonebook : ";
		std::cin >> buffer;

		if (!buffer.compare("EXIT"))
			break ;
		else if (!buffer.compare("ADD"))
			add_contact(&phonebook);
		else if (!buffer.compare("SEARCH"))
			search_contact(phonebook);
	}
	return (0);
}