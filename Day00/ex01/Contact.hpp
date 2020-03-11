// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sample1.class.hpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/15 18:37:03 by kradoste          #+#    #+#             //
//   Updated: 2019/07/16 18:42:26 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact {

public:
	Contact(void);
	~Contact(void);
	std::string	get_first_name(void);
	std::string get_last_name(void);
	std::string get_nick_name(void);
	std::string get_login(void);
	std::string get_address(void);
	std::string get_email(void);
	std::string get_phone(void);
	std::string get_birthday(void);
	std::string get_favorite_meal(void);
	std::string get_underwear_color(void);
	std::string get_darkest_secret(void);
	void		set_first_name(std::string f_n);
	void		set_last_name(std::string l_n);
	void		set_nick_name(std::string n_n);
	void		set_login(std::string l);
	void		set_address(std::string a);
	void		set_email(std::string e);
	void		set_phone(std::string p);
	void		set_birthday(std::string b);
	void		set_favorite_meal(std::string f_m);
	void		set_underwear_color(std::string u_c);
	void		set_darkest_secret(std::string d_s);

private:
	std::string	_first_name;
	std::string	_last_name;
	std::string _nick_name;
	std::string	_login;
	std::string	_address;
	std::string	_email;
	std::string	_phone;
	std::string	_birthday;
	std::string	_favorite_meal;
	std::string	_underwear_color;
	std::string	_darkest_secret;
	void		_parse_contact(std::string, std::string);
};

#endif
