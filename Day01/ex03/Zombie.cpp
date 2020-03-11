// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 14:08:07 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 16:55:19 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie()
{
	return;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " died." << std::endl;
}

void	Zombie::announce()
{
	std::string str = "<" + this->_name + " (" + this->_type + ")> ";
	std::cout << str << "Braiiiiiiinnnnnsssss....." << std::endl;
}

void		Zombie::set_name(std::string name)
{
	this->_name = name;
}

void		Zombie::set_type(std::string type)
{
	this->_type = type;
}

std::string Zombie::get_name(void)
{
	return (this->_name);
}

std::string Zombie::get_type(void)
{
	return (this->_type);
}
