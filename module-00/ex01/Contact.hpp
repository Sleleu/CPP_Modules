/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:25:29 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/24 18:26:19 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <cstring>
#include <string>
#include <iostream>
#include <cstdio>

class Contact
{
	public:
		void		resetContact(void);
		void		getData(std::string message) const;
		std::string	selectData(std::string message);
		void		setData(int index);

		void	display_all(std::string str) const;
		void	display_truncate(std::string str) const;
		void	display_info(void) const;
		int		getData(void);
		
	private:

		int			_index;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string _secret;
		std::string _phone_number;
};

#endif