/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:44:59 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/16 19:54:10 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	return (0);
}
