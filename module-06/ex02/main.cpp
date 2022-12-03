/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:41:49 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/03 19:22:11 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int res;
	
	Base *ptr_base;
	std::srand(std::time(NULL));
	res = rand() % 3;
	if (res == 0)
	{
		std::cout << "Generate A" << std::endl;
		ptr_base = new A;
	}
	else if (res == 1)
	{
		std::cout << "Generate B" << std::endl;
		ptr_base = new B;
	}
	else
	{
		std::cout << "Generate C" << std::endl;
		ptr_base = new C;
	}
	return (ptr_base);
}

void	identify(Base *p)
{
	Base *res;
	
	res = dynamic_cast<A*>(p);
	if (res != NULL)
		std::cout << "ptr = A" << std::endl;
	res = dynamic_cast<B*>(p);
	if (res != NULL)
		std::cout << "ptr = B" << std::endl;
	res = dynamic_cast<C*>(p);
	if (res != NULL)
		std::cout << "ptr = C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		Base &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "ref = A" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Ref is not a A" << '\n';
	}
	try
	{
		Base &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "ref = B" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "ref is not a B" << '\n';
	}
	try
	{
		Base &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "ref = C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "ref is not a C" << '\n';
	}	
}

int	main(void)
{
	Base *ptr_base = generate();
	Base &ref_base = *ptr_base;

	identify(ptr_base);
	identify(ref_base);
	delete (ptr_base);
	return (0);
}
