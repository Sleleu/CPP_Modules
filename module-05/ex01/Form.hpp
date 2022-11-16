/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 19:57:11 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/16 19:59:48 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Form
{
	public:
		Form();
		Form(const Form &src);
		~Form();

		Form& operator=(const Form &rhs);
		
	private:
		const std::string	_name;
		bool				_signed;
		unsigned int		_sign_grade;
		unsigned int		_exec_grade;
};