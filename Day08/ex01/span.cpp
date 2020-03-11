// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/26 07:49:50 by kradoste          #+#    #+#             //
//   Updated: 2019/07/26 22:24:15 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <cstdlib>
#include "span.hpp"

Span::Span(unsigned int n) : _n(n) {}
Span::Span(Span const &obj) : _n(obj._n) {}
Span::~Span(void) {}

Span const	&Span::operator=(Span const &obj)
{
	this->_n = obj._n;
	this->_v = obj._v;
	return (*this);
}

void		Span::addNumber(int num)
{
	if (this->_v.size() == this->_n)
		throw std::exception();
	this->_v.push_back(num);
}

int			Span::shortestSpan(void)
{
	if (this->_n <= 1)
        throw std::exception();
	std::vector<int>	copy = this->_v;
	std::sort(copy.begin(), copy.end());

	int					diff;
	int					tmp = 2147483647;

	std::vector<int>::iterator it = copy.begin();

	std::vector<int>::iterator itcpy = copy.begin() + 1;
	for (; it != copy.end(); itcpy++)
	{
		diff = std::abs(static_cast<int>(*itcpy) - static_cast<int>(*it));
		if (diff < tmp)
			tmp = diff;
		it = itcpy;
	}
	return (tmp);
}

int			Span::longestSpan(void)
{
	if (this->_n <= 1)
		throw std::exception();
	return (static_cast<int>(*std::max_element(this->_v.begin(), this->_v.end())) -
			static_cast<int>(*std::min_element(this->_v.begin(), this->_v.end())));
}
