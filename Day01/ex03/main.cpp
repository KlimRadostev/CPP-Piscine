// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 15:00:22 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 17:20:15 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	ZombieHorde ZombieRats = ZombieHorde(20);
	ZombieRats.announce();
	
	return (0);
}
