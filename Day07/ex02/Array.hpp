// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/24 23:53:35 by kradoste          #+#    #+#             //
//   Updated: 2019/07/25 03:31:47 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template<typename T>

class	Array
{
public:
	Array<T>(void) : _n(0), _array(NULL) {}
	Array<T>(unsigned int n) : _n(n), _array(new T[n]) {}
	~Array<T>(void) { if (this->_array != NULL) delete [] this->_array;}

	Array<T>	&operator=(Array const &rhs)
		{
			this->_n = rhs._n;
			delete [] this->_array;
			this->_array = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++)
				this->_array[i] = rhs._array[i];
			return (*this);
		}

	T			&operator[](unsigned int n)
		{
			if (n >= this->_n)
				throw std::exception();
			return (this->_array[n]);
			}
	unsigned int	size(void) const { return (this->_n); }

private:
	unsigned int	_n;
	T				*_array;
};

#endif
