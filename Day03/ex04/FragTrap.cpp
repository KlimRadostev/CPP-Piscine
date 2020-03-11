// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 11:34:57 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 21:27:57 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include <stdlib.h>

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(const std::string name) :
	ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "<FRAG> Constructor: Ha ha ha! I LIVE! Hahaha!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs) : ClapTrap(rhs)
{
	std::cout << "<FRAG> Constructor copy: Ha ha ha! I LIVE! Hahaha!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "<FRAG> Destructor: *Poop." << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
 	std::cout << "<FRAG> Operator: Who's a badass robot? This guy!" << std::endl;
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
	std::cout << "<FRAG> Ranged Attack: Get off my lawn!" << std::endl;
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangeDmg << " points of damage !\n";
}

void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "<FRAG> Melee Attack: Meet professor punch!" << std::endl;
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " close, dealing " << this->_meleeDmg << " points of damage !\n";
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
		std::cout << "<FRAG> Vaulthunter_dot_exe: " << FG_quotes() << std::endl;
		std::cout << "-Used on " << target << std::endl;
		this->_mP -= 25;
	}
	else
		std::cout << "<FRAG> No Energy: Oh darn, oh boy, oh crap, oh boy, oh darn.\n";
}
