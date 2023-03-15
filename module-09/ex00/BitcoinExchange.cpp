/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:09:19 by sleleu            #+#    #+#             */
/*   Updated: 2023/03/15 20:09:22 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& src) { *this = src; }
BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string input_name) : _input_name(input_name)
{
	parse_database();
	parse_input(_input_name);
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& lhs)
{
	this->_input_name = lhs._input_name;
	this->_database = lhs._database;
	return (*this);
}

bool	BitcoinExchange::parse_date(std::string date)
{
	if (date.size() != 10 || atol(date.c_str()) < 2009 || atol(date.c_str()) > 2023
		|| atol(date.c_str() + 5) < 1 || atol(date.c_str() + 5) > 12
		|| atol(date.c_str() + 8) < 1 || atol(date.c_str() + 8) > 31)
		return (false);
	for (size_t i = 0; i < date.size(); i++)
		if (!isdigit(date[i]))
			if (!(date[i] == '-' && (i == 4 || i == 7)))
				return (false);
	return (true);
}

bool	BitcoinExchange::parse_value(std::string value)
{
	bool point = false;
	
	if (value.size() == 0)
		return (false);
	for (size_t i = 0; i < value.size(); i++)
		if (!isdigit(value[i]))
		{
			if (value[i] == '.' && point == false)
				point = true;
			else
				return (false);
		}
	return (true);
}

void	BitcoinExchange::parse_database(void)
{
	std::ifstream	db_file;
	std::string		buffer;
	std::string		current_date;

	db_file.open("./data.csv");
	if (!db_file.is_open())
		throw parse_exception("Error: Failed to open \"data.csv\"");
	std::getline(db_file, buffer);
	if (buffer.compare("date,exchange_rate"))
		throw parse_exception("Invalid file format, expected at first line : \"date,exchange_rate\"", 1);
	for (size_t i = 0; std::getline(db_file, buffer, ','); i++)
	{
		if (!parse_date(buffer))
			throw parse_exception("Invalid date", i + 2);
		current_date = buffer;
		std::getline(db_file, buffer, '\n');
		if (_database.find(current_date) != _database.end())
			throw parse_exception("Date already exist", i + 2);
		if (!parse_value(buffer))
			throw parse_exception("Invalid value", i + 2);			
		float value = strtof(buffer.c_str(), NULL);
		if (value < 0 || errno == ERANGE)
			throw parse_exception("Invalid value", i + 2);		
		_database.insert(std::make_pair(current_date, strtof(buffer.c_str(), NULL)));
	}
}

void	BitcoinExchange::parse_input(std::string input)
{
	std::ifstream	input_file;
	std::string		buffer;
	std::string		current_date;
	
	input_file.open(input.c_str());
	if (input_file.is_open() == false)
		throw parse_exception("Error: Failed to open input file");
	std::getline(input_file, buffer);
	if (buffer.compare("date | value"))
		throw parse_exception("Invalid file format, expected at first line : \"date | value\"", 1);
	for (size_t i = 0; std::getline(input_file, buffer); i++)
	{
		current_date.assign(buffer, 0, 10);
		if (!parse_date(current_date))
			std::cout << RED << "Error: bad input => " << YELLOW << current_date << RESET << std::endl;
		else
		{
			std::string value(buffer.begin() + 10, buffer.end());
			if (value.compare(0, 3, " | "))
				std::cout << RED << "Error: bad line format " << RESET << std::endl;
			else
				do_exchange(current_date, value);
		}
	}
}

void	BitcoinExchange::do_exchange(std::string current_date, std::string value)
{	
	double d_value;
	double exchange_rate;

	value.erase(0, 3);
	d_value = atof(value.c_str());
	if (d_value < 0 || d_value > 1000)
	{
		d_value < 0 ? std::cout << RED << "Error: not a positive number.\n" << RESET :
					  std::cout << RED << "Error: too large a number.\n" << RESET ;
		return ;
	}
	if (!parse_value(value))
	{
		std::cout << RED << "Error: bad line format " << RESET << std::endl;
		return ;
	}
	map_iterator it = nearest_key(current_date);
	if (it == _database.end())
	{
		std::cout << RED << "Error: too recent date to output bitcoin value.\n" << RESET;
		return ;
	}
	exchange_rate = it->second;
	double result = exchange_rate * d_value;
	std::cout << CYAN << current_date << " => " << MAGENTA << value <<
				 CYAN << " = " << GREEN << result << RESET << std::endl;
}

BitcoinExchange::map_iterator	BitcoinExchange::nearest_key(std::string& key)
{
	map_iterator it = _database.find(key);
	
	if (it != _database.end())
		return (it);
	it = _database.lower_bound(key);
	if (key.compare(it->first) > 0 || it == _database.begin() || it == _database.end())
		return (it);
	else
		return  (--it);
}
