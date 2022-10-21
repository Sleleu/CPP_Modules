/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:15:36 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/21 23:10:45 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <cstring>
#include <iostream>

class Contact
{
	public:

		int		index;
		char	first_name[101];
		char	last_name[101];
		char	nickname[101];
		void	setSecret(std::string buffer);
		void	setNumber(std::string buffer);
		void	resetContact(void);
		void	getSecret(void) const;
		void	getNumber(void) const;

		Contact(void);
		~Contact(void);
		
	private:

		char _secret[101];
		char _phone_number[101];
};

class PhoneBook
{
	public:

		Contact contact[8];
};

#endif