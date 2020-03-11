// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/18 23:37:19 by kradoste          #+#    #+#             //
//   Updated: 2019/07/18 23:41:56 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _point(0)
{
}

Fixed::Fixed(int const value)
{
	this->_point = value << Fixed::_fractionalBits;
}

Fixed::Fixed(float const value)
{
	this->_point = (int)roundf(value * (1 << Fixed::_fractionalBits));
}

Fixed::Fixed(Fixed const &src) : _point(src.getRawBits())
{
}

Fixed::~Fixed(void)
{
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	this->_point = rhs.getRawBits();

	return *this;
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return this->_point == rhs.getRawBits();
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return this->_point != rhs.getRawBits();
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return this->_point < rhs.getRawBits();
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return this->_point <= rhs.getRawBits();
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return this->_point > rhs.getRawBits();
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return this->_point >= rhs.getRawBits();
}

Fixed Fixed::operator+(Fixed const &rhs)
{
	Fixed f;

	f.setRawBits(this->_point + rhs.getRawBits());
	return f;
}

Fixed Fixed::operator-(Fixed const &rhs)
{
	Fixed f;

	f.setRawBits(this->_point - rhs.getRawBits());
	return f;
}

Fixed Fixed::operator*(Fixed const &rhs)
{
	Fixed f;

	f.setRawBits((this->_point * rhs.getRawBits()) >> Fixed::_fractionalBits);
	return f;
}

Fixed Fixed::operator/(Fixed const &rhs)
{
	Fixed f;

	f.setRawBits((this->_point << Fixed::_fractionalBits) / rhs.getRawBits());
	return f;
}

Fixed &Fixed::operator++(void)
{
	this->_point++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed &Fixed::operator--(void)
{
	this->_point--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

int Fixed::getRawBits(void) const
{
	return this->_point;
}

void Fixed::setRawBits(int const raw)
{
	this->_point = raw;
}

int Fixed::toInt(void) const
{
	return this->_point >> Fixed::_fractionalBits;
}

float Fixed::toFloat(void) const
{
	return this->_point / (float)(1 << Fixed::_fractionalBits);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed & Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed & Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
