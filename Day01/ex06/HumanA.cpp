// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 19:31:06 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 21:05:40 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _name(name), _type(type) {}
HumanA::~HumanA(){}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_type.getType() << std::endl;
}
