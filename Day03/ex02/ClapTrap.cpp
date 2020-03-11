// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 17:31:10 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 18:23:53 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name, int hP, int maxHP, int mP, int maxMP,
				   int lvl, int meleeDmg, int rangeDmg, int armrDmgRedctn) :
	_name(name), _hP(hP), _maxHP(maxHP), _mP(mP), _maxMP(maxMP), _lvl(lvl),
	_meleeDmg(meleeDmg), _rangeDmg(rangeDmg), _armrDmgRedctn(armrDmgRedctn)
{
	std::cout << "<CLAP> Constructor: Yeehaw!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs) :
    _name(rhs._name), _hP(rhs._hP), _maxHP(rhs._maxHP), _mP(rhs._mP),
	_maxMP(rhs._maxMP), _lvl(rhs._lvl), _meleeDmg(rhs._meleeDmg),
	_rangeDmg(rhs._rangeDmg), _armrDmgRedctn(rhs._armrDmgRedctn)
{
	std::cout << "<CLAP> Constructor copy: Yeehaw!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "<CLAP> Destructor: Dangit, I'm out!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "<CLAP> Operator: Glitching weirdness is a term of endearment, right?"
			  << std::endl;
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

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "<CLAP> Takes Damage: Ow hohoho, that hurts! Yipes!" << std::endl;
    amount = (amount > this->_armrDmgRedctn) ? (amount - this->_armrDmgRedctn) : 0;
    amount = (amount > this->_hP) ? this->_hP : amount;
	std::cout << this->_name << " took " << amount << " of damage.\n";
    this->_hP = (this->_hP > amount) ? (this->_hP - amount) : 0;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "<CLAP> Reparation: *Sweet life juice!" << std::endl;
    amount = (amount > this->_maxHP - this->_hP) ? (this->_maxHP - this->_hP) : amount;
    this->_hP += amount;
	std::cout << this->_name << " was repaired for " << amount 
			  << " of health." << std::endl;
}
