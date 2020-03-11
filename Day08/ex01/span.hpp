// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/26 07:51:20 by kradoste          #+#    #+#             //
//   Updated: 2019/07/26 08:06:42 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SPAN_H
# define SPAN_H

#include <vector>

class	Span
{
public:
	Span(unsigned int n);
	Span(Span const &obj);
	~Span(void);

	Span const	&operator=(Span const &obj);

	void		addNumber(int num);

	int			shortestSpan(void);
	int			longestSpan(void);

private:
	std::vector<int>	_v;
	unsigned int		_n;
};

#endif
