// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 17:20:43 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 17:52:48 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string *strp = &str;

	std::string &strr = str;

	std::cout << str << std::endl;
	std::cout << *strp << std::endl;
	std::cout << strr << std::endl;

	return (0);
}
