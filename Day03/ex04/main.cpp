// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 15:32:56 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 21:16:32 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	FragTrap FT("FRAG");
	ScavTrap ST("SCAV");
	NinjaTrap NT("ZER0");
	SuperTrap SS("SUPR");

 	srand( time(NULL) );

	std::cout << "------------------------------------------------------------------\n";
	FT.takeDamage(5);
	ST.takeDamage(30);
	NT.takeDamage(40);
	SS.takeDamage(40);
	std::cout << "------------------------------------------------------------------\n";
	FT.rangedAttack("Jack");
	ST.rangedAttack("Jack");
	NT.rangedAttack("Jack");
	SS.rangedAttack("Jack");
	FT.meleeAttack("Jack");
	ST.meleeAttack("Jack");
	NT.meleeAttack("Jack");
	SS.meleeAttack("Jack");
	std::cout << "------------------------------------------------------------------\n";
	FT.beRepaired(10);
	ST.beRepaired(100);
	NT.beRepaired(1000);
	SS.beRepaired(10000);

	std::cout << "------------------------------------------------------------------\n";
	for (int i = 0; i < 3 ; i++)
	{
		FT.vaulthunter_dot_exe("Jack");
		SS.vaulthunter_dot_exe("Jack");
		ST.challengeNewcomer("Jack");
	}
	std::cout << "------------------------------------------------------------------\n";
	NT.ninjaShoebox(FT);
	NT.ninjaShoebox(ST);
	NT.ninjaShoebox(NT);
	SS.ninjaShoebox(FT);
	SS.ninjaShoebox(ST);
	std::cout << "------------------------------------------------------------------\n";
	return (0);
}
