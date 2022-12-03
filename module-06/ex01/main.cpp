/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 02:03:47 by sleleu            #+#    #+#             */
/*   Updated: 2022/12/03 19:11:26 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

typedef struct s_Data 
{
	std::string message;
}	Data;


uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data		src;
	Data		*dst;
	uintptr_t	raw;

	src.message = "go brrbrrr";
	raw = serialize(&src);
	std::cout << "adress of src message : " << &src.message << std::endl;
	std::cout << "src message : " << src.message << std::endl;
	std::cout << "raw data : " << raw << std::endl;
	dst = deserialize(raw);
	std::cout << "dest message : " << dst->message << std::endl;
	return (0);
}