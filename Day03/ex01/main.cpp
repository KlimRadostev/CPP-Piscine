// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 15:32:56 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 17:11:17 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap FT("FRAG");
	ScavTrap ST("SCAV");

 	srand( time(NULL) );

	FT.takeDamage(5);
	ST.takeDamage(30);
	FT.rangedAttack("Jack");
	ST.rangedAttack("Jack");
	FT.meleeAttack("Jack");
	ST.meleeAttack("Jack");
	FT.beRepaired(10);
	ST.beRepaired(100);

	for (int i = 0; i < 3 ; i++)
	{
		FT.vaulthunter_dot_exe("Jack");
		ST.challengeNewcomer("Jack");
	}
	return (0);
}
