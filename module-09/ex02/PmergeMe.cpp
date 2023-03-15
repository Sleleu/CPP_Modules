#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}
PmergeMe::PmergeMe(const PmergeMe& src) { (*this = src); }
PmergeMe::~PmergeMe(void) {}

PmergeMe::PmergeMe(char **tokens)
{
	for (size_t i = 0; tokens[i]; i++)
    {
        parse_arg(tokens[i], i + 1);
		if (std::find(_vector.begin(), _vector.end(), atoi(tokens[i])) != _vector.end())
			throw (parse_exception("Error: Duplicate present in sequence", i + 1));
		_vector.push_back(atoi(tokens[i]));
		_deque.push_back(atoi(tokens[i]));
    }
	std::cout << BOLDMAGENTA << "Results with std::vector\n" << RESET YELLOW << "Before: ";
	double time_vec = display_result(_vector);
	std::cout << BOLDMAGENTA <<  "Results with std::deque\n" << RESET YELLOW << "Before: ";
	double time_deq = display_result(_deque);
	std::cout << BOLDCYAN << std::fixed << "Time to process a range of " << _vector.size()
			  << " elements with std::vector : " << BOLDGREEN << time_vec << BOLDCYAN <<" seconds" << std::endl;
	std::cout << BOLDCYAN << std::fixed << "Time to process a range of " << _deque.size()
			  << " elements with std::deque : " << BOLDGREEN << time_deq << BOLDCYAN << " seconds" << std::endl;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& lhs)
{
    _vector = lhs._vector;
	_deque = lhs._deque;
    return (*this);
}

void    PmergeMe::parse_arg(std::string token, int index)
{
	for (size_t i = 0; i < token.size(); i++)
		if (token[i] != '0' && atoi(token.c_str()) == 0)
        	throw (parse_exception("Error: Invalid character", index));
    else if (atoi(token.c_str()) < 0)
        throw (parse_exception("Error: Invalid range of integer", index));
}

template <typename T> double	PmergeMe::display_result(T& cont)
{
	display_sequence(cont);
	clock_t start = clock();
	merge_insert(cont);
	clock_t end = clock();
	std::cout << GREEN << "After: ";
	display_sequence(cont);
	std::cout << RESET;
	double time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	return (time);
}

template <typename T> void	PmergeMe::display_sequence(T& cont)
{
	for (typename T::iterator it = cont.begin(); it < cont.end(); it++)
	{
		std::cout << *it;
		if (it + 1 != cont.end())
			std::cout << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::merge_insert(vector& vec)
{
	d_vector split_vec = split_container(vec);
	for (d_vec_iterator split_it = split_vec.begin(); split_it < split_vec.end(); split_it++)
		insert_sort(*split_it);
	if (split_vec.size() > 1)
		merge_sort(split_vec);
	vec = split_vec[0];
}

void	PmergeMe::merge_insert(deque& deq)
{
	d_deque split_deq = split_container(deq);
	for (d_deq_iterator split_it = split_deq.begin(); split_it < split_deq.end(); split_it++)
		insert_sort(*split_it);
	if (split_deq.size() > 1)
		merge_sort(split_deq);
	deq = split_deq[0];
}

PmergeMe::d_vector	PmergeMe::split_container(vector& vec)
{
	d_vector split_vec;
	for (vec_iterator it = vec.begin() ; it < vec.end(); it += MAX_GRP_SIZE)
	{
		vector tmp;
		if (it + MAX_GRP_SIZE < vec.end())
			tmp.assign(it, it + MAX_GRP_SIZE);
		else
			tmp.assign(it, vec.end());
		split_vec.push_back(tmp);
	}
	return (split_vec);
}

PmergeMe::d_deque	PmergeMe::split_container(deque& deq)
{
	d_deque split_deq;
	for (deq_iterator it = deq.begin() ; it < deq.end(); it += MAX_GRP_SIZE)
	{
		deque tmp;
		if (it + MAX_GRP_SIZE < deq.end())
			tmp.assign(it, it + MAX_GRP_SIZE);
		else
			tmp.assign(it, deq.end());
		split_deq.push_back(tmp);
	}
	return (split_deq);
}

template <typename T> void	PmergeMe::insert_sort(T& cont)
{
	for (typename T::iterator it = cont.begin() + 1 ;it < cont.end(); it++)
	{
		int key = *it;
		int i = std::distance(cont.begin(), it - 1);
		for (;i >= 0 && cont[i] > key; i--)
			cont[i + 1] = cont[i];
		cont[i + 1] = key;
	}
}

template <typename T> T	PmergeMe::merge(T& cont1, T& cont2)
{
	T merged_cont;
	typename T::iterator it1 = cont1.begin();
	typename T::iterator it2 = cont2.begin();

	for (;it1 < cont1.end() && it2 < cont2.end();)
		*it1 < *it2 ? merged_cont.push_back(*it1++) : merged_cont.push_back(*it2++);
	for (;it1 < cont1.end() || it2 < cont2.end();)
		it1 < cont1.end() ? merged_cont.push_back(*it1++) : merged_cont.push_back(*it2++);
	return (merged_cont);
}

void 	PmergeMe::merge_sort(d_vector& d_vec)
{
	while (d_vec.size() > 1)
		for (d_vec_iterator it = d_vec.begin() ; it + 1 < d_vec.end(); it++)
		{
			vector tmp = merge(*it++, *it);
			d_vec.erase(it--);
			d_vec.erase(it);
			d_vec.push_back(tmp);
		}
}

void 	PmergeMe::merge_sort(d_deque& d_deq)
{
	while (d_deq.size() > 1)
	{
		deque tmp = merge(d_deq[0], d_deq[1]);
		d_deq.pop_front();
		d_deq.pop_front();
		d_deq.push_back(tmp);
	}
}
