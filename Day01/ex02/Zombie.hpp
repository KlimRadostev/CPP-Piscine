// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 14:10:29 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 16:03:52 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie
{
public:
	Zombie(std::string, std::string);
	~Zombie();

	void		announce();
	std::string	get_name();
	std::string	get_type();

private:
	std::string _name;
	std::string _type;
};

#endif
