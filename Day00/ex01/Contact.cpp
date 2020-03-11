// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sample1.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/15 18:38:14 by kradoste          #+#    #+#             //
//   Updated: 2019/07/16 19:01:45 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string Contact::get_nick_name(void)
{
	return (this->_nick_name);
}

std::string Contact::get_login(void)
{
	return (this->_login);
}

std::string Contact::get_address(void)
{
	return (this->_address);
}

std::string Contact::get_email(void)
{
	return (this->_email);
}

std::string Contact::get_phone(void)
{
	return (this->_phone);
}

std::string Contact::get_birthday(void)
{
	return (this->_birthday);
}

std::string Contact::get_favorite_meal(void)
{
	return (this->_favorite_meal);
}

std::string Contact::get_underwear_color(void)
{
	return (this->_underwear_color);
}

std::string Contact::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}

void        Contact::set_first_name(std::string str)
{
	this->_first_name = str;
}

void        Contact::set_last_name(std::string str)
{
	this->_last_name = str;
}

void        Contact::set_nick_name(std::string str)
{
	this->_nick_name = str;
}

void        Contact::set_login(std::string str)
{
	this->_login = str;
}

void        Contact::set_address(std::string str)
{
	this->_address = str;
}

void        Contact::set_email(std::string str)
{
	this->_email = str;
}

void        Contact::set_phone(std::string str)
{
	this->_phone = str;
}

void        Contact::set_birthday(std::string str)
{
	this->_birthday = str;
}

void        Contact::set_favorite_meal(std::string str)
{
	this->_favorite_meal = str;
}

void        Contact::set_underwear_color(std::string str)
{
	this->_underwear_color = str;
}

void        Contact::set_darkest_secret(std::string str)
{
	this->_darkest_secret = str;
}
