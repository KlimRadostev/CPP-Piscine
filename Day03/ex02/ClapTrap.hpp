// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 17:20:54 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 18:30:46 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class ClapTrap
{
public:
	ClapTrap(const std::string name, int hP, int maxHP, int mP, int maxMP,
			 int lvl, int meleeDmg, int rangeDmg, int armrDmgRedctn);
	ClapTrap(const ClapTrap &rhs);
	~ClapTrap(void);

	ClapTrap	&operator=(const ClapTrap &rhs);

	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

protected:
	std::string		_name;
    unsigned int	_hP;
    unsigned int	_maxHP;
    unsigned int	_mP;
    unsigned int	_maxMP;
    unsigned int	_lvl;
    unsigned int	_meleeDmg;
    unsigned int	_rangeDmg;
    unsigned int	_armrDmgRedctn;
};

#endif
