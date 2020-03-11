// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/26 07:48:29 by kradoste          #+#    #+#             //
//   Updated: 2019/07/26 22:22:21 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include <random>
#include <exception>
#include "span.hpp"

/*int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
*/
int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please enter ONE value" << std::endl;
		return (0);
	}

	srand(time(0));
	int i = atoi(av[1]);
	Span test(i);

	std::cout << "Values:" << i << std::endl << "| ";

	for (int n = 0; n < i; n++)
	{
		int y = rand() % 10000;
		test.addNumber(y);
		std::cout << y << " | ";
	}

	try {
		std::cout << std::endl << "Smallest value in storage: " << test.shortestSpan();
		std::cout << std::endl <<"Largest value in storage: " << test.longestSpan();
		std::cout << std::endl << "Now adding one more to show error handling" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not enough values" << std::endl;
	}
	try
	{
		test.addNumber(rand() % 10000);
	}
	catch (std::exception &e)
	{
		std::cout << "can't add more capacity is maxed" << std::endl;
	}
	return (0);
}
