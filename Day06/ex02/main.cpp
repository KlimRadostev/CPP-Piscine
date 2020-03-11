// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/24 02:54:57 by kradoste          #+#    #+#             //
//   Updated: 2019/07/24 03:21:57 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int	i = rand() % 3;
	if (i == 1)
		return (new A());
	else if (i == 2)
		return (new B());
	return (new C());
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "pointer identifies as A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "pointer identifies as B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "pointer identifies as C" << std::endl;
}

void	identify_from_reference(Base &p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "reference identifies as A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "reference identifies as B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "reference identifies as C" << std::endl;
}

int		main()
{
	srand(time(0));

	for (int i = 0; i < 3; i++)
	{
		Base *one = generate();
		std::cout << "identifying base by pointer" << std::endl;
		std::cout << "base " << i << " ";
		identify_from_pointer(one);
		std::cout << "identifying base by reference" << std::endl;
		std::cout << "base " << i << " ";
		identify_from_reference(*one);
		std::cout << std::endl;
	}
	return (0);
}
