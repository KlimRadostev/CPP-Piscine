// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 18:02:29 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 18:55:54 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_H
# define HUMAN_H

#include <string>
#include "Brain.hpp"

class Human
{
public:
	Human();
	~Human();

	const Brain	&getBrain() const;
	std::string identify() const;

private:
	const Brain	_brain;
};

#endif
