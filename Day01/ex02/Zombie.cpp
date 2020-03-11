// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 14:08:07 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 16:04:54 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	announce();
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

std::string Zombie::get_name(void)
{
	return (this->_name);
}

std::string Zombie::get_type(void)
{
	return (this->_type);
}
