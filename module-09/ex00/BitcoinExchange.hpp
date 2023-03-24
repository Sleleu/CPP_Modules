/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:10:56 by sleleu            #+#    #+#             */
/*   Updated: 2023/03/24 13:07:57 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <map>

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#define RESET   	"\033[0m"
#define RED     	"\033[31m"
#define GREEN   	"\033[32m"
#define YELLOW  	"\033[33m"
#define MAGENTA 	"\033[35m"
#define CYAN    	"\033[36m"
#define BOLDRED     "\033[1m\033[31m"
#define BOLDYELLOW  "\033[1m\033[33m"

class BitcoinExchange
{

	public:

	typedef std::map<std::string, float>::iterator map_iterator;

	BitcoinExchange(std::string input);
	BitcoinExchange(const BitcoinExchange& src);
	~BitcoinExchange();
	BitcoinExchange& operator=(const BitcoinExchange& lhs);

	void			parse_database(void);
	void			parse_input(std::string input);
	bool			parse_date(std::string date);
	bool			parse_value(std::string value);
	void			do_exchange(std::string buffer);
	map_iterator	nearest_key(std::string& key);

    class parse_exception
    {
        public:
            parse_exception(const std::string& message, ssize_t line) : _message(message), _line(line) {}
			parse_exception(const std::string& message) : _message(message), _line(-1) {}
        const char* what();
		ssize_t line();
        private:
            std::string _message;
			ssize_t		_line;
    };

	private:

	BitcoinExchange();
	std::string						_input_name;
	std::map<std::string, float>	_database;

};

#endif