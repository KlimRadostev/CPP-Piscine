// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 11:34:57 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 17:14:09 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include <stdlib.h>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) :
	_name(name), _hP(100), _maxHP(100), _mP(50), _maxMP(50),
	_lvl(1), _meleeDmg(20), _rangeDmg(15), _armrDmgRedctn(3)
{
	std::cout << "Constructor: *Can I just say... yeehaw." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &FT) :
	_name(FT._name), _hP(FT._hP), _maxHP(FT._maxHP), _mP(FT._mP),
	_maxMP(FT._maxMP), _lvl(FT._lvl), _meleeDmg(FT._meleeDmg),
	_rangeDmg(FT._rangeDmg), _armrDmgRedctn(FT._armrDmgRedctn)
{
	std::cout << "Constructor copy: *Extra ouch!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_name << "Destructor: *Poop." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
 	std::cout << "Operator: *This is why you do your homework!" << std::endl;
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
	std::cout << "Ranged Attack: *In yo' FACE!" << std::endl;
	std::cout << "SCAV-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangeDmg << " points of damage !\n";
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "Melee Attack: *Ready for the PUNCHline?!" << std::endl;
	std::cout << "SCAV-TP " << this->_name << " attacks " << target;
	std::cout << " close, dealing " << this->_meleeDmg << " points of damage !\n";
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "Take Damage: *Why did they build me out of galvanized flesh?\n";
	amount = (amount > this->_armrDmgRedctn) ? (amount - this->_armrDmgRedctn) : 0;
	amount = (amount > this->_hP) ? this->_hP : amount;
	std::cout << "SCAV-TP " << this->_name << " took " << amount << " of damage.\n";
	this->_hP = (this->_hP > amount) ? (this->_hP - amount) : 0;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "Reparation: *Healsies!" << std::endl;
	amount = (amount > this->_maxHP - this->_hP) ? (this->_maxHP - this->_hP) : amount;
	this->_hP += amount;
	std::cout << "SCAV-TP " << this->_name << " was repaired for " << amount
			  << " of health." << std::endl;
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
	std::cout << "Challenge New Guy: " << SV_quotes() << std::endl;
	std::cout << "-Used on " << target << std::endl;
}
