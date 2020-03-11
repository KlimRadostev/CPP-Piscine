// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 19:18:46 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 21:30:06 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_H
# define HUMANA_H

#include <string>
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string, Weapon &w);
	~HumanA();

	void	attack() const;

private:
	std::string	_name;
	Weapon		&_type;
};

#endif
