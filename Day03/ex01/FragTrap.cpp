// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 11:34:57 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 17:16:10 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include <stdlib.h>

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name) :
	_name(name), _hP(100), _maxHP(100), _mP(100), _maxMP(100),
	_lvl(1), _meleeDmg(30), _rangeDmg(20), _armrDmgRedctn(5)
{
	std::cout << "Constructor: *Ha ha ha! I LIVE! Hahaha!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &FT) :
	_name(FT._name), _hP(FT._hP), _maxHP(FT._maxHP), _mP(FT._mP),
	_maxMP(FT._maxMP), _lvl(FT._lvl), _meleeDmg(FT._meleeDmg),
	_rangeDmg(FT._rangeDmg), _armrDmgRedctn(FT._armrDmgRedctn)
{
	std::cout << "Constructor copy: *Ha ha ha! I LIVE! Hahaha!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << this->_name << "Destructor: *Yikes!" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
 	std::cout << "Operator: *Who's a badass robot? This guy!" << std::endl;
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

void		FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "Ranged Attack: *Get off my lawn!" << std::endl;
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangeDmg << " points of damage !\n";
}

void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "Melee Attack: *Meet professor punch!" << std::endl;
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " close, dealing " << this->_meleeDmg << " points of damage !\n";
}

void		FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "Take Damage: *Ow hohoho, that hurts! Yipes!" << std::endl;
	amount = (amount > this->_armrDmgRedctn) ? (amount - this->_armrDmgRedctn) : 0;
	amount = (amount > this->_hP) ? this->_hP : amount;
	std::cout << "FR4G-TP " << this->_name << " took " << amount << " of damage.\n";
	this->_hP = (this->_hP > amount) ? (this->_hP - amount) : 0;
}

void		FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "Reparation: *Sweet life juice!" << std::endl;
	amount = (amount > this->_maxHP - this->_hP) ? (this->_maxHP - this->_hP) : amount;
	this->_hP += amount;
	std::cout << "FR4G-TP " << this->_name << " was repaired for " << amount
			  << " of health." << std::endl;
}

static std::string	FG_quotes(void)
{
	std::string quotes[25] =
		{"This time it'll be awesome, I promise!",
		 "Hey everybody, check out my package!",
		 "Place your bets!",
		 "Defragmenting!",
		 "Recompiling my combat code!",
		 "Running the sequencer!"
		 "It's happening... it's happening!",
		 "It's about to get magical!",
		 "I'm pulling tricks outta my hat!",
		 "You can't just program this level of excitement!",
		 "What will he do next?",
		 "Things are about to get awesome!",
		 "Let's get this party started!",
		 "Glitchy weirdness is term of endearment, right?",
		 "Push this button, flip this dongle, voila! Help me!",
		 "square the I, carry the 1... YES!",
		 "Resequencing combat protocols!",
		 "Look out everybody, things are about to get awesome!",
		 "I have an IDEA!",
		 "Round and around and around she goes!",
		 "It's like a box of chocolates...",
		 "Step right up to the sequence of Trapping!",
		 "Hey everybody, check out my package!",
		 "Loading combat packages!",
		 "F to the R to the 4 to the G to the WHAAT!",
		};
	return (quotes[std::rand() % 24]);
}
		 
void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->_mP >= 25)
	{
		std::cout << "Vaulthunter_dot_exe: " << FG_quotes() << std::endl;
		std::cout << "-Used on " << target << std::endl;
		this->_mP -= 25;
	}
	else
		std::cout << "No Energy: Oh darn, oh boy, oh crap, oh boy, oh darn." << std::endl;
}
