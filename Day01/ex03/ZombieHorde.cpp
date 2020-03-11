// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 16:31:45 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 17:11:52 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include <stdlib.h>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

static std::string  random_name()
{
	std::string names[4] = {
        "Patrick",
		"SpongeBob",
        "Calamardo",
		"DonCangrejo"
    };
    return (names[std::rand() % 4]);
}

static std::string  random_type()
{
	std::string type[4] = {
        "Screamer",
        "Bloater",
        "Jokey",
        "Tank"
    };
    return (type[std::rand() % 4]);
}

ZombieHorde::ZombieHorde(int n) : _wwz(n)
{
	this->_zombies = new Zombie[n];

	for (int j = 0; j < n; j++)
	{
		_zombies[j].set_name(random_name());
		_zombies[j].set_type(random_type());
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_zombies;
}

void				ZombieHorde::announce() const
{
	for (int j = 0; j < this->_wwz; j++)
		this->_zombies[j].announce();
}
