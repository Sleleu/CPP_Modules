/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:10:12 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/12 18:16:01 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <algorithm>

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	
	MutantStack()
	{
		std::cout << "Default constructor called" << std::endl;
	};
	MutantStack(const MutantStack &src)
	{
		std::cout << "Copy constructor called" << std::endl;
		*this = src;
	};
	virtual ~MutantStack() {std::cout << "Destructor called" << std::endl;};

	MutantStack & operator=(const MutantStack &rhs)
	{
		*this = &rhs;
	};
	
	typedef typename std::deque<T>::iterator iterator;
	iterator begin() 
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
};

#endif