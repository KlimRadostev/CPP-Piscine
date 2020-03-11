// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 19:39:36 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 21:12:39 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}
HumanB::~HumanB() {}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << this->_type->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &type)
{
	this->_type = &type;
}
