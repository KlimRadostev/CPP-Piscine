// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHord.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 16:23:11 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 17:11:39 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HORDE_H
# define ZOMBIE_HORDE_H

#include <string>
#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int);
	~ZombieHorde();
	void	announce() const;

private:
	int		_wwz;
	Zombie	*_zombies;
};

#endif
