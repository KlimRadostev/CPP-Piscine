// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/19 11:35:20 by kradoste          #+#    #+#             //
//   Updated: 2019/07/19 18:32:35 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>

class	FragTrap
{
public:
	FragTrap(const std::string name);
	FragTrap(FragTrap const &FT);
	~FragTrap(void);

	FragTrap		&operator=(FragTrap const &rhs);

	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
    void        	takeDamage(unsigned int amount);
    void        	beRepaired(unsigned int amount);
	void			vaulthunter_dot_exe(std::string const &target);

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
