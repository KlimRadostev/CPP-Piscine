// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 14:11:30 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 16:44:54 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include <stdlib.h>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	return ;
}

ZombieEvent::~ZombieEvent()
{
	return ;
}

static std::string	random_name()
{
	std::string	names[4] = {
		"Screamer",
		"Bloater",
		"Jokey",
		"Tank"
	};
	return (names[std::rand() % 4]);
}

void				ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie				*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->_type));
}

void				ZombieEvent::randomChump()
{
	Zombie(random_name(), this->_type);
}
