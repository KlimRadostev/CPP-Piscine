// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   iter.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/24 22:08:38 by kradoste          #+#    #+#             //
//   Updated: 2019/08/07 11:40:32 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template<typename T>
void	iter(T *arr, size_t len, void (*f)(T &))
{
	for (size_t x = 0; x < len; x++)
		f(arr[x]);
}

template <typename T>
void	ifEvenThenZero(T &x)
{
	if (x % 2 == 0)
		x = 0;
}

int		main()
{
	float	arr[10] = {1,2,3,4.5,5,6,7,8.3,9,10};

	for (int i = 0; i < 10; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	iter(arr, 10, ifEvenThenZero);

	for (int i = 0; i < 10; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	return (0);
}
