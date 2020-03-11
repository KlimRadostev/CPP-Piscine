// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/24 20:43:14 by kradoste          #+#    #+#             //
//   Updated: 2019/09/01 22:47:40 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>

template<typename T>
T const	&max(T const &x, T const &y)
{ return ((x > y) ? x : y); }

template<typename T>
T const	&min(T const &x, T const&y)
{ return ((x < y) ? x : y); }

template<typename T>
void	swap(T &x, T &y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

int	main()
{
	int		a = 2;
	int		b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}
