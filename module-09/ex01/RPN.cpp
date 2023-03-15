/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:15:55 by sleleu            #+#    #+#             */
/*   Updated: 2023/03/15 20:21:17 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Rpn::Rpn() {}
Rpn::Rpn(const Rpn& src) { *this = src; }
Rpn::~Rpn() {}

Rpn& Rpn::operator=(const Rpn& lhs)
{
	_stack = lhs._stack;

	return (*this);
}

void	Rpn::addition(void)
{
	int res;
	
	res = _stack.top();
	_stack.pop();
	res = _stack.top() + res;
	_stack.pop();
	_stack.push(res);
}

void	Rpn::substraction(void)
{
	int res;

	res = _stack.top();
	_stack.pop();
	res = _stack.top() - res;
	_stack.pop();
	_stack.push(res);
}

void	Rpn::multiplication(void)
{
	int res;
	
	res = _stack.top();
	_stack.pop();
	res = _stack.top() * res;
	_stack.pop();
	_stack.push(res);
}

void	Rpn::division(void)
{
	int res;
	
	res = _stack.top();
	_stack.pop();
	res = _stack.top() / res;
	_stack.pop();
	_stack.push(res);
}

std::string Rpn::calcul(std::string str)
{
	std::ostringstream result;

	for (size_t i = 0; i < str.size(); i++)
	{
		if (isdigit(str[i]) || (str[i] == '-' && str[i + 1] && isdigit(str[i + 1])))
		{
			str[i] == '-' ? \
			_stack.push((str[++i] - 48) * -1) : _stack.push(str[i] - 48);
		}
		else if (str[i] == '+' && _stack.size() > 1)
			addition();
		else if (str[i] == '-' && _stack.size() > 1)
			substraction();
		else if (str[i] == '*' && _stack.size() > 1)
			multiplication();
		else if (str[i] == '/' && _stack.size() > 1 && _stack.top() != 0)
			division();
		else if (str[i] != ' ')
			return ("Error");
	}
	if (_stack.size() != 1)
		return ("Error");
	result << _stack.top();
	return (result.str());
}
