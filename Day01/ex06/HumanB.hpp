// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 19:36:22 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 21:11:28 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_H
# define HUMANB_H

#include <string>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon &);

private:
	std::string	_name;
	Weapon		*_type;
};

#endif
