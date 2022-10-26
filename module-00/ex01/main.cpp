/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:11:54 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/24 18:30:23 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	search_contact(PhoneBook *phonebook)
{
	std::string	buffer;

	int			i;
	
	if (phonebook->contact[0].getData() == -1)
	{
	 	std::cout << "No contact in the phonebook" << std::endl;
	 	return ;
	}
	for (i = 1; i < 8 && phonebook->contact[i].getData() != -1; i++);
	while (1)
	{
		std::cout << "Enter index of the contact : ";
		if (!getline(std::cin, buffer))
			return ;
		if (!buffer.compare("EXIT") || buffer[0] == EOF)
			return ;
		else if (buffer.size() != 1 || buffer[0] < '1' || buffer[0] > i + 48)
		 	std::cout << "Invalid index" << std::endl;
		else
			break ;
	}
	i = buffer[0] - 48;
	phonebook->contact[i - 1].display_info();
}

void	add_contact(PhoneBook *phonebook, int i)
{
	std::string	buffer;
	
	phonebook->contact[i].resetContact();
	phonebook->contact[i].setData(i);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	buffer;
	int			index = 0;

	for (int i = 0; i < 8; i++)
		phonebook.contact[i].resetContact();
	std::cout << std::endl << "    --    WELCOME TO PHONEBOOK    --    "
	<< std::endl << std::endl;
	while (42)
	{
		std::cout << "Phonebook > ";
		if (!getline(std::cin, buffer))
			break ;
		if (!buffer.compare("EXIT"))
			break ;
		else if (!buffer.compare("ADD"))
		{
			if (index == 8)
				index = 0;
			add_contact(&phonebook, index);
			index++;
		}
		else if (!buffer.compare("SEARCH"))
			search_contact(&phonebook);
	}
	return (0);
}