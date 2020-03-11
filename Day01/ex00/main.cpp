// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 13:01:22 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 14:09:20 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	pony *p = new pony("David");

	p->set_race("Russian horse");
	std::cout << "I am a " << p->get_race() << std::endl;

	delete p;
}

void	ponyOnTheStack(void)
{
	pony	p = pony("Carlos");

	p.set_race("Hispanic horse");
	std::cout << "I am an " << p.get_race() << std::endl;
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();

	return (0);
}
