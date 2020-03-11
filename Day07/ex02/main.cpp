// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/25 02:56:30 by kradoste          #+#    #+#             //
//   Updated: 2019/08/22 00:24:31 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Array.hpp"
#include <iostream>

int main()
{
	Array<double> ar(10);
	Array<char> str(10);

	Array<double> arr;
	arr = ar;
	for (unsigned int i = 0; i < arr.size(); i++)
		arr[i] = i;
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	for (unsigned int i = 0; i < str.size(); i++)
		str[i] = i + 'a';
	for (unsigned int i = 0; i < str.size(); i++)
		std::cout << str[i] << " ";
	std::cout << std::endl;
	try{
		arr[arr.size() + 1] = 0;
	}
	catch (std::exception &e) {
		std::cout << e.what() << " can't access non existent memory" << std::endl;
	}
	return (0);
}
