// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 11:35:20 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 18:25:45 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef	SCAVTRAP_H
# define SCAVTRAP_H

#include <string>

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
public:
	ScavTrap(const std::string name);
	ScavTrap(ScavTrap const &rhs);
	~ScavTrap(void);

	ScavTrap	&operator=(ScavTrap const &rhs);

	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		challengeNewcomer(std::string const &target);
};

#endif
