/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:08:38 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/12 19:11:55 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	std::cout << "---- Default tests ----" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "---- Second tests ----" << std::endl;
	MutantStack<float> fstack;
	fstack.push(1);
	fstack.push(2.5);
	fstack.push(3.4);
	fstack.push(4.568);
	fstack.push(5.87);

	std::cout << "Top of float stack : " << fstack.top() << std::endl;
	std::cout << "Size of float stack : " << mstack.size() << std::endl;

	MutantStack<float>::iterator it2 = fstack.begin();
	MutantStack<float>::iterator ite2 = fstack.end();
	
	std::cout << *it2 << std::endl;
	it2++;
	std::cout << *it2 << std::endl;
	it2++;
	std::cout << *it2 << std::endl;
	it2--;
	std::cout << *it2 << std::endl;

	std::cout << "entire float stack iteration :" << std::endl;
	it2 = fstack.begin();
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	return (0);
}
