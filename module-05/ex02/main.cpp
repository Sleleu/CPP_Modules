/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:44:59 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/20 22:21:16 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberryCreationForm.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat t("Thierry godmod", 5);
	Bureaucrat r("Richard le patron", 1);
	Bureaucrat c("CSP++", 26);
	Bureaucrat l("Laurent le concierge", 150);

	PresidentialPardonForm fiche = PresidentialPardonForm("fiche", "Sylvain");
	std::cout << fiche << std::endl;
	fiche.execute(r);
	fiche.beSigned(c);
	c.bePromoted();
	fiche.beSigned(c);
	
	// after sign
	std::cout << fiche << std::endl;
	std::cout << t << std::endl;
	fiche.execute(t);
	t.beRetrograded();
	std::cout << t << std::endl;
	fiche.execute(t);

	l.executeForm(fiche);

	RobotomyRequestForm f2("fiche 2", "Michel"); 
	std::cout << f2 << std::endl;
	f2.beSigned(r);
	c.executeForm(f2);
	std::cout << f2 << std::endl;

	ShrubberryCreationForm f3("Schrub", "Robert");
	
	//FAIL TEST
	// Bureaucrat test("test", 138);
	// f3.beSigned(test);
	// test.executeForm(f3);
	// std::cout << f3 << std::endl;	
	
	std::cout << f3 << std::endl;
	f3.beSigned(r);
	r.executeForm(f3);
 
	return (0);
}
