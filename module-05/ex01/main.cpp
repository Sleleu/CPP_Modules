/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:44:59 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/18 17:26:17 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat t("Thierry godmod", 0);
	Bureaucrat r("Richard le patron", 1);
	
	std::cout << t << std::endl;
	t.bePromoted();
	std::cout << t << std::endl;

	std::cout << r << std::endl;
	r.beRetrograded();
	std::cout << r << std::endl;

	Bureaucrat l("Laurent le concierge", 2500);
	std::cout << l << std::endl;
	l.bePromoted();
	std::cout << l << std::endl;
	l.beRetrograded();
	l.beRetrograded();
	std::cout << l << std::endl;

	std::cout << std::endl << std::endl << "FORM TEST" << std::endl;
	Form fiche("fiche", 148, 148);
	std::cout << fiche << std::endl;

	fiche.beSigned(l);
	l.bePromoted();
	l.bePromoted();
	fiche.beSigned(l);
	std::cout << fiche << std::endl;
	l.beRetrograded();
	r.signForm(fiche);
	l.signForm(fiche);

	return (0);
}
