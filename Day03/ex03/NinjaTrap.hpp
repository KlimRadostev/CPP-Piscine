// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 11:35:20 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 19:07:58 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_H
# define NINJATRAP_H

#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(const std::string name);
	NinjaTrap(NinjaTrap const &rhs);
	~NinjaTrap(void);

	NinjaTrap	&operator=(NinjaTrap const &rhs);

	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);

	void		ninjaShoebox(NinjaTrap &target);
	void		ninjaShoebox(ClapTrap &target);
	void		ninjaShoebox(ScavTrap &target);
	void		ninjaShoebox(FragTrap &target);
};

#endif
