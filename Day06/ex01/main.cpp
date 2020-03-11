// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/24 01:37:43 by kradoste          #+#    #+#             //
//   Updated: 2019/07/24 02:39:14 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

struct	Data
{
	int			n;
	std::string	s1;
	std::string	s2;
};

void	*serialize(void)
{
	Data	*series = new Data;
	char	arr[63] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	series->n = (rand() % 10000) - 5000;
	for (int i = 0; i < 8; i++)
	{
		series->s1 += arr[rand() % 62];
		series->s2 += arr[rand() % 62];
	}
	return (series);
}

Data	*deserialize(void *raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int		main()
{
	srand(time(0));

	void	*cereal = serialize();
	Data	*dsr = deserialize(cereal);

	std::cout << dsr->n << " | " << dsr->s1 << " | " << dsr->s2 << std::endl;
	delete	reinterpret_cast<Data*>(cereal);
	return (0);
}
