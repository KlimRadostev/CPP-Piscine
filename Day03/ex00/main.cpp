// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 15:32:56 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 16:26:32 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

#include "FragTrap.hpp"

int main()
{
	FragTrap fT_main("ZerO");
	FragTrap fT_cp(fT_main);

	srand( time(NULL) );
	fT_cp.takeDamage(5);
	fT_cp.takeDamage(30);
	fT_cp.beRepaired(10);
	fT_cp.beRepaired(100);
	fT_cp.rangedAttack("Jack");
	fT_cp.meleeAttack("Jack");

	for (int i = 0; i < 7 ; i++)
		fT_cp.vaulthunter_dot_exe("Jack");
	return (0);
}
