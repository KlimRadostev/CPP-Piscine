
// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/26 22:56:24 by kradoste          #+#    #+#             //
//   Updated: 2019/09/03 17:21:01 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "mutantstack.hpp"

/*int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}*/

int main()
{
	srand(time(0));
	std::cout << "Outputs with MutantStack:" << std::endl;
	MutantStack<int>	s;

	s.push(100);
	s.push(200);
	s.push(300);
	s.push(400);
	s.push(100);
	s.push(500);
	s.push(700);
	s.push(200);
	s.push(1000);
	s.push(200);
	std::cout << s.top() << std::endl;
	s.pop();
	std::cout << s.size() << std::endl;

	MutantStack<int>::iterator it = s.begin();
	MutantStack<int>::iterator ite = s.end();

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> z(s);

	std::cout << std::endl << "Outputs with std::list:" << std::endl;
	std::list<int>	ls;


	ls.push_front(100);
	ls.push_front(200);
	ls.push_front(300);
	ls.push_front(400);
	ls.push_front(100);
	ls.push_front(500);
	ls.push_front(700);
	ls.push_front(200);
	ls.push_front(1000);
	ls.push_front(200);
	std::cout << ls.front() << std::endl;
	ls.pop_front();
	std::cout << ls.size() << std::endl;

	std::list<int>::iterator lit = ls.begin();
	std::list<int>::iterator lite = ls.end();

	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::list<int> lz(ls);
	return 0;
}
