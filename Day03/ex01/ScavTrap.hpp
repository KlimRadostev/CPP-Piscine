// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 11:35:20 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 18:33:39 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef	SCAVTRAP_H
# define SCAVTRAP_H

#include <string>

class	ScavTrap
{
public:
	ScavTrap(const std::string name);
	ScavTrap(ScavTrap const &FT);
	~ScavTrap(void);

	ScavTrap		&operator=(ScavTrap const &rhs);

	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	void			challengeNewcomer(std::string const &target);

private:
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
