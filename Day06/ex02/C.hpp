// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   C.hpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/24 02:45:19 by kradoste          #+#    #+#             //
//   Updated: 2019/07/24 03:19:16 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef C_H
# define C_H

#include "Base.hpp"

class C : public Base
{
public:
	C(void) {}
	C(C const &obj) {*this = obj;}
	~C(void) {}
	C	&operator=(C const &rhs)
		{
			static_cast<void>(rhs);
			return (*this);
		}
};

#endif
