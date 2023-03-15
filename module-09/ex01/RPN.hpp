/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:16:02 by sleleu            #+#    #+#             */
/*   Updated: 2023/03/15 20:25:37 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <stack>

#ifndef RPN_HPP
# define RPN_HPP

class Rpn
{
	public: 

	Rpn();
	Rpn(const Rpn& src);
	~Rpn();
	Rpn& operator=(const Rpn& lhs);

	std::string calcul(std::string arg);
	void		addition(void);
	void		substraction(void);
	void		multiplication(void);
	void		division(void);

	private :

	std::stack<int> _stack;

};

#endif