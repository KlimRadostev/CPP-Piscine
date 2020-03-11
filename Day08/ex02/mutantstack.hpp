// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   mutantstack.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/26 22:25:33 by kradoste          #+#    #+#             //
//   Updated: 2019/07/26 23:13:23 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack<T>(void) {};
	MutantStack(MutantStack const &obj) { (void)obj; };
	~MutantStack<T>(void) {};

	MutantStack	&operator=(MutantStack const &rhs) { (void)rhs; };

	typedef std::list<int>::iterator	iterator;

	T			top(void) { return (_stack.front()); }
	T			size(void) { return (_stack.size()); }
	iterator	begin(void) { return (_stack.begin()); }
	iterator	end(void) { return (_stack.end()); }
	void		push(T val) { _stack.push_front(val); }
	void		pop(void) { _stack.pop_front(); }

private:
	std::list<T>	_stack;
};

#endif
