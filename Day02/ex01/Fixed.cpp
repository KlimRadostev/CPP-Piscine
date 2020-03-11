// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/18 19:41:28 by kradoste          #+#    #+#             //
//   Updated: 2019/07/18 23:32:18 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed() : _point(0){}

Fixed::Fixed(int const value)
{
	this->_point = value << Fixed::_fractionalBits;
}

Fixed::Fixed(float const value)
{
	this->_point = (int)roundf(value * (1 << Fixed::_fractionalBits));
}

Fixed::Fixed(Fixed const &fix) : _point(fix.getRawBits()) {}

Fixed::~Fixed() {}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->_point = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->_point == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_point != rhs.getRawBits());
}

bool    Fixed::operator<(Fixed const &rhs) const
{
    return (this->_point < rhs.getRawBits());
}

bool    Fixed::operator<=(Fixed const &rhs) const
{
    return (this->_point <= rhs.getRawBits());
}

bool    Fixed::operator>(Fixed const &rhs) const
{
    return (this->_point > rhs.getRawBits());
}

bool    Fixed::operator>=(Fixed const &rhs) const
{
    return (this->_point >= rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed   Fixed::operator-(Fixed const &rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed   Fixed::operator*(Fixed const &rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed   Fixed::operator/(Fixed const &rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	this->_point++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed	&Fixed::operator--(void)
{
	this->_point--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed 	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}

Fixed		&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_point);
}

void	Fixed::setRawBits(int const x)
{
	this->_point = x;
	std::cout << "setRawBits member function called" << std::endl;
}

int		Fixed::toInt() const
{
	return (this->_point >> Fixed::_fractionalBits);
}

float	Fixed::toFloat() const
{
	return (this->_point / (float)(1 << Fixed::_fractionalBits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &in)
{
	out << in.toFloat();
	return (out);
}
