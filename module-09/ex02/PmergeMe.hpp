/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:07:03 by sleleu            #+#    #+#             */
/*   Updated: 2023/03/24 12:33:49 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <climits>
#include <cstdlib>
#include <sys/time.h>

#ifndef PMERGEME_HPP
# define PMERGEME_HP

#define RESET   	"\033[0m"
#define RED     	"\033[31m"
#define GREEN   	"\033[32m"
#define YELLOW  	"\033[33m"
#define MAGENTA 	"\033[35m"
#define CYAN    	"\033[36m"
#define BOLDRED     "\033[1m\033[31m"
#define BOLDYELLOW  "\033[1m\033[33m"
#define BOLDMAGENTA "\033[1m\033[35m"
#define BOLDCYAN    "\033[1m\033[36m"
#define BOLDGREEN   "\033[1m\033[32m"

#define MAX_GRP_SIZE	8

class PmergeMe
{
    public:

	//---------------- Aliases -------------------------------------
	typedef std::vector<int>							vector;
	typedef std::vector<std::vector<int> >				d_vector;
    typedef std::vector<int>::iterator 					vec_iterator;
	typedef std::vector<std::vector<int> >::iterator	d_vec_iterator;
	typedef std::deque<int>								deque;
	typedef std::deque<std::deque<int> >				d_deque;
	typedef std::deque<int>::iterator					deq_iterator;
	typedef std::deque<std::deque<int> >::iterator		d_deq_iterator;
    
	//---------------- Constructors | copy | destructors ----------- 
    PmergeMe(char **arg);
    PmergeMe(const PmergeMe& src);
    ~PmergeMe();
    PmergeMe& operator=(const PmergeMe& lhs);
	
	void							parse_arg(std::string token, int index);
	//--------------- Template functions --------------------------
	template <typename T> double	display_result(T& cont);	
	template <typename T> void		display_sequence(T& cont);
	template <typename T> void		insert_sort(T& cont);
	template <typename T> T			merge(T& cont1, T& cont2);
	//--------------- Vector overload ------------------------------
	void							merge_insert(vector& vec);
	void							merge_sort(d_vector& d_vec);
	d_vector						split_container(vector& vec);
	//--------------- Deque overload -------------------------------
	void							merge_insert(deque& deq);
	void							merge_sort(d_deque& d_deq);
	d_deque							split_container(deque& vec);
	
	//--------------- Class exception ------------------------------
    class parse_exception
    {
        public:
            parse_exception(const std::string& message, ssize_t token) : _message(message), _token(token) {}
        const char* what();
		ssize_t token();
        private:
            std::string _message;
			ssize_t		_token;
    };

    private:
	
	PmergeMe(void);   
	vector _vector;
	deque  _deque;
};

#endif
