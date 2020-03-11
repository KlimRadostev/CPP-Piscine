// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/26 06:55:49 by kradoste          #+#    #+#             //
//   Updated: 2019/07/26 20:44:00 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Easyfind.hpp"

int main()
{
	std::list<int>	list;
	for (int i = 0; i < 10; i++)
		list.push_back(i);

	for (int i = 0; i < 11; i++)
		try {
			std::cout << easyfind(list, i) << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

	return (0);
}
