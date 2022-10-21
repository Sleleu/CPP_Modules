/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:15:36 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/21 19:14:53 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <cstring>
#include <iostream>

class Contact
{
	public:

		int		index;
		char	first_name[11];
		char	last_name[11];
		char	nickname[11];
		void	setSecret(std::string buffer);
		void	setNumber(std::string buffer);
		void	getSecret(void) const;

		Contact(void);
		~Contact(void);
		
	private:

		char _secret[101];
		char _phone_number[11];
};

class PhoneBook
{
	public:

		Contact contact[8];
};

#endif