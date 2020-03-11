// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 11:35:20 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 20:02:02 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERTRAP_H
# define SUPERTRAP_H

#include <string>

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class	SuperTrap : public virtual FragTrap, public virtual NinjaTrap
{
public:
	SuperTrap(const std::string name);
	SuperTrap(SuperTrap const &rhs);
	~SuperTrap(void);

	SuperTrap	&operator=(SuperTrap const &rhs);

	void		rangedAttack(std::string const &target);
	void		meleeAttack(std::string const &target);
};

#endif
