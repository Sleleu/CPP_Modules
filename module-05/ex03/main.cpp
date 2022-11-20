/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:44:59 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/20 22:07:21 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberryCreationForm.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int	main(void)
{
 
	Bureaucrat t("Thierry", 2);
	Intern intern;
	Form* rrf;

	std::cout << std::endl << "Robotomy test" << std::endl;
	if ((rrf = intern.makeForm("robotomy request", "Bender")))
	{
		std::cout << *rrf << std::endl;
		rrf->beSigned(t);
		std::cout << *rrf << std::endl;
		t.executeForm(*rrf);
		delete rrf;
	}
	std::cout << std::endl << "Shrub test" << std::endl;
	Form* shrub;
	if ((shrub = intern.makeForm("shrubberry creation", "Marcel")))
	{
		std::cout << *shrub << std::endl;
		shrub->beSigned(t);
		std::cout << *shrub << std::endl;
		t.executeForm(*shrub);
		delete shrub;
	}
	std::cout << std::endl << "Presidential test" << std::endl;
	Form* pardon;
	if ((pardon = intern.makeForm("presidential pardon", "Henry")))
	{
		std::cout << *pardon << std::endl;
		pardon->beSigned(t);
		std::cout << *pardon << std::endl;
		t.executeForm(*pardon);
		delete pardon;
	}
	return (0);
}
