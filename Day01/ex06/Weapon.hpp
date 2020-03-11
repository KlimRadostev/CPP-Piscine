// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 18:58:51 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 21:14:23 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon
{
public:
	Weapon(std::string);
	~Weapon();

	void				setType(std::string);
	const std::string	getType() const;

private:
	std::string 		_type;
};

#endif
