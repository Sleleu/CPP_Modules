/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:15:36 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/24 18:26:57 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <cstring>
#include <string>
#include <iostream>
#include <cstdio>
#include "Contact.hpp"

class PhoneBook
{
	public:

		Contact contact[8];
};

#endif