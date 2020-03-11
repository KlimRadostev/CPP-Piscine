// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/18 16:17:41 by kradoste          #+#    #+#             //
//   Updated: 2019/07/18 19:50:54 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"
#include <iostream>
int main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
 	std::cout << a.getRawBits() << std::endl;
	a.setRawBits(24);
 	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
