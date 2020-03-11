// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 11:34:57 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 18:25:36 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include <stdlib.h>

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(const std::string name) :
	ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "<SCAV> Constructor: *Can I just say... yeehaw." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs) : ClapTrap(rhs)
{
	std::cout << "<SCAV> Constructor copy: *Extra ouch!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_name << "<SCAV> Destructor: *AAAHHHH!!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
 	std::cout << "<SCAV> Operator: *This is why you do your homework!" << std::endl;
	this->_name = rhs._name;
	this->_hP = rhs._hP;
	this->_maxHP = rhs._maxHP;
	this->_mP = rhs._mP;
	this->_maxMP = rhs._maxMP;
	this->_lvl = rhs._lvl;
	this->_meleeDmg = rhs._meleeDmg;
	this->_rangeDmg = rhs._rangeDmg;
	this->_armrDmgRedctn = rhs._armrDmgRedctn;
	return (*this);
}

void		ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "<SCAV> Ranged Attack: *In yo' FACE!" << std::endl;
	std::cout << "SCAV-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangeDmg << " points of damage !\n";
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "<SCAV> Melee Attack: *Ready for the PUNCHline?!" << std::endl;
	std::cout << "SCAV-TP " << this->_name << " attacks " << target;
	std::cout << " close, dealing " << this->_meleeDmg << " points of damage !\n";
}

static std::string	SV_quotes(void)
{
	std::string quotes[4] =
		{
			"There's more to learn!",
			"This was a reeeally bad idea!",
			"I am rubber, and you are so dead!",
			"Let me teach you the ways of magic!"
		};
	return (quotes[std::rand() % 4]);
}
		 
void		ScavTrap::challengeNewcomer(std::string const &target)
{
	std::cout << "<SCAV> Challenge New Guy: " << SV_quotes() << std::endl;
	std::cout << "-Used on " << target << std::endl;
}
