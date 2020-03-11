// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/23 20:18:56 by kradoste          #+#    #+#             //
//   Updated: 2019/07/24 01:34:35 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <iomanip>
#include "convertor.hpp"

int	main(int ac, char **argv)
{
	if (ac != 2)
		std::cout << "Enter 1 value!" << std::endl;
	else
	{
		Convertor av(argv[1]);
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "char: ";
		try {
			int check = static_cast<int>(av);
			
			if (check >= 33 && check <= 126)
				std::cout << "'" << static_cast<char>(check) << "'" << std::endl;
			else
				std::cout << "Non displayable" << std::endl;
		}
		catch (Convertor::Impossible &e) {
			std::cout << e.what() << std::endl;
		}
		
		std::cout << "int: ";
		try {
			std::cout << static_cast<int>(av) << std::endl;
		}
		catch (Convertor::Impossible &e) {
			std::cout << e.what() << std::endl;
		}
		
		std::cout << "float: ";
		try {
			std::cout << static_cast<float>(av) << "f" << std::endl;
		}
		catch (Convertor::Impossible &e) {
			std::cout << e.what() << std::endl;
		}
		
		std::cout << "double: ";
		try {
			std::cout << static_cast<double>(av) << std::endl;
		}
		catch (Convertor::Impossible &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
