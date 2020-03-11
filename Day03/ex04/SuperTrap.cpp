// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 11:34:57 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 21:18:13 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>

#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

SuperTrap::SuperTrap(const std::string name) :
	ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(name), NinjaTrap(name)
{
	std::cout << "<SUPER> Constructor: Get ready for some super face time!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &rhs) : ClapTrap(rhs), FragTrap(rhs), NinjaTrap(rhs)
{
	std::cout << "<SUPER>Constructor copy:Get ready for some super face time!" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "<SUPER> Destructor: At least I still have my teeth!" << std::endl;
}

void		SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void		SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
