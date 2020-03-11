// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 11:35:20 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 19:39:44 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>
#include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
public:
	FragTrap(const std::string name);
	FragTrap(FragTrap const &rhs);
	~FragTrap(void);

	FragTrap	&operator=(FragTrap const &rhs);

	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
	void		vaulthunter_dot_exe(std::string const &target);
};

#endif
