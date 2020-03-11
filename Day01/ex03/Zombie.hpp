// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 14:10:29 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 16:55:44 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie
{
public:
	Zombie();
	~Zombie();

	void		announce();
	void		set_name(std::string);
	void		set_type(std::string);
	std::string	get_name();
	std::string	get_type();

private:
	std::string _name;
	std::string _type;
};

#endif
