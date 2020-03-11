// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   B.hpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/24 02:45:19 by kradoste          #+#    #+#             //
//   Updated: 2019/07/24 03:19:53 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef B_H
# define B_H

#include "Base.hpp"

class B : public Base
{
public:
	B(void) {}
	B(B const &obj) {*this = obj;}
	~B(void) {}
	B	&operator=(B const &rhs)
		{
			static_cast<void>(rhs);
			return (*this);
		}
};

#endif
