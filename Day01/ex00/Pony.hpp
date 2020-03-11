// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 13:01:15 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 13:57:05 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_H
# define PONY_H

#include <string>

class pony
{
public:
	pony(std::string);
	~pony(void);
	
	void		set_race(std::string);
	std::string	get_race(void);

private:
	std::string _name;
	std::string _race;
};

#endif
