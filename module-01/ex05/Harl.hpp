/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 00:42:27 by sleleu            #+#    #+#             */
/*   Updated: 2022/10/31 00:52:33 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef HARL_HPP
# define HARL_HPP

class Harl
{
	public:
	
	void complain( std::string level );

	private:

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif