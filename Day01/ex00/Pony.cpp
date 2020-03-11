// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 13:01:10 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 14:09:31 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include "Pony.hpp"

pony::pony(std::string name) : _name(name)
{
	std::cout << "My name is " << name << std::endl;
	return ;
}

pony::~pony(void)
{
	return ;
}

void		pony::set_race(std::string race)
{
	this->_race = race;
	return ;
}

std::string pony::get_race(void)
{
	return (this->_race);
}
