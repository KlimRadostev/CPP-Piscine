// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   A.hpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/24 02:45:19 by kradoste          #+#    #+#             //
//   Updated: 2019/07/24 03:20:01 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef A_H
# define A_H

#include "Base.hpp"

class A : public Base
{
public:
	A(void) {}
	A(A const &obj) {*this = obj;}
	~A(void) {}
	A	&operator=(A const &rhs)
		{
			static_cast<void>(rhs);
			return (*this);
		}
};

#endif
