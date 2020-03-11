// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 11:34:57 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 19:24:23 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>
#include <stdlib.h>

#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

NinjaTrap::NinjaTrap(const std::string name) :
	ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "<NINJA> Constructor: Hahaha... I ascend!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &rhs) : ClapTrap(rhs)
{
	std::cout << "<NINJA> Constructor copy: Hahaha... I ascend!" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "<NINJA> Destructor: I have many regrets" << std::endl;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs)
{
 	std::cout << "<NINJA> Operator: Who's a badass robot? This guy!" << std::endl;
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

void		NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "<NINJA> Ranged Attack: Up close and personal." << std::endl;
	std::cout << "NINJA-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangeDmg << " points of damage !\n";
}

void		NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "<NINJA> Melee Attack: Meet professor punch!" << std::endl;
	std::cout << "NINJA-TP " << this->_name << " attacks " << target;
	std::cout << " close, dealing " << this->_meleeDmg << " points of damage !\n";
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << "<NINJA> I will prove to you my robotic superiority!" << std::endl;
	std::cout << "Shoe Box ability activate on " << target.getName() << std::endl;
}

void		NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << "<NINJA> You versus me! Me versus you! Either way!" << std::endl;
	std::cout << "Shoe Box ability activate on " << target.getName() << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << "<NINJA> I can take ya! ... I think." << std::endl;
	std::cout << "Shoe Box ability activate on " << target.getName() << std::endl;
}

void		NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << "<NINJA> Woohoo! In your face!" << std::endl;
	std::cout << "Shoe Box ability activate on " << target.getName() << std::endl;
}
