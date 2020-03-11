// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   convertor.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/23 21:48:20 by kradoste          #+#    #+#             //
//   Updated: 2019/07/24 01:37:20 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include "convertor.hpp"

Convertor::Convertor(std::string input) : _input(input) {}
Convertor::Convertor(Convertor const &) {}
Convertor::~Convertor(void) {}
Convertor	&Convertor::operator=(Convertor const &rhs)
{
	this->_input = rhs._input;
	return (*this);
}

Convertor::operator	char(void) const
{
	int	num = 0;
	try {
		num = std::stoi(this->_input);
	}
	catch (const std::exception &i) {
		throw (Impossible());
	}
	return (static_cast<char>(num));
}

Convertor::operator	int(void) const
{
	int	num = 0;
	try {
		num = std::stoi(this->_input);
	}
	catch (const std::exception &i) {
		throw (Impossible());
	}
	return (num);
}

Convertor::operator	float(void) const
{
	float	num = 0.0;
	try {
		num = std::stof(this->_input);
	}
	catch (const std::exception &i) {
		throw (Impossible());
	}
	return (num);
}

Convertor::operator	double(void) const
{
	float	num = 0.0;
	try {
		num = std::stof(this->_input);
	}
	catch (const std::exception &i) {
		throw (Impossible());
	}
	return (num);
}

typedef		Convertor::Impossible Impossible;
Impossible::Impossible(void) {}
Impossible::Impossible(Impossible const &) {}
Impossible::~Impossible(void) throw() {}
Impossible	&Impossible::operator=(Impossible const &) { return (*this); };
char const	*Impossible::what(void) const throw() { return ("impossible"); }
