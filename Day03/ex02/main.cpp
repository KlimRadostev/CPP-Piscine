// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 15:32:56 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 18:27:47 by kradoste         ###   ########.fr       //
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

	std::cout << "------------------------------------------------------------------\n";
	FT.takeDamage(5);
	ST.takeDamage(30);
	std::cout << "------------------------------------------------------------------\n";	
	FT.rangedAttack("Jack");
	ST.rangedAttack("Jack");
	FT.meleeAttack("Jack");
	ST.meleeAttack("Jack");
	std::cout << "------------------------------------------------------------------\n";
	FT.beRepaired(10);
	ST.beRepaired(100);

	std::cout << "------------------------------------------------------------------\n";
	for (int i = 0; i < 3 ; i++)
	{
		FT.vaulthunter_dot_exe("Jack");
		ST.challengeNewcomer("Jack");
	}
	std::cout << "------------------------------------------------------------------\n";
	return (0);
}
