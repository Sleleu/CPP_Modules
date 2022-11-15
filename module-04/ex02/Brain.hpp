/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:10:09 by sleleu            #+#    #+#             */
/*   Updated: 2022/11/15 15:41:54 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain
{
	public:
		Brain();
		Brain(const Brain &src);
		~Brain();

		Brain&	operator=(const Brain &rhs);

		std::string	getIdeas(int i) const;
		void		setIdeas(std::string src, int i);
	
	protected:
		std::string ideas[100];
};

#endif