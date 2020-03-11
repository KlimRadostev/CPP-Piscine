// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Easyfind.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/26 06:55:59 by kradoste          #+#    #+#             //
//   Updated: 2019/07/26 07:41:29 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <exception>
#include <list>

template<typename T>
int	easyfind(T obj, int num)
{
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = obj.end();

	for (it = obj.begin(); it != ite; ++it)
		if (*it == num)
			return (num);
	
	throw	std::exception();
}

#endif
