// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 15:00:22 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 16:09:56 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent Apocalypse;

	Apocalypse.setZombieType("burning");
	Zombie	*first = Apocalypse.newZombie("Horse");
	Apocalypse.setZombieType("headless");
	Zombie	*second = Apocalypse.newZombie("doctor");
	
	delete first;
	delete second;
	Apocalypse.setZombieType("horde");
	Apocalypse.randomChump();
	Apocalypse.randomChump();
	Apocalypse.randomChump();
	Apocalypse.randomChump();
	Apocalypse.randomChump();	

	return (0);
}
