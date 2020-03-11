// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 17:28:14 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 18:55:38 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BRAIN_H
# define BRAIN_H

#include <string>

class Brain
{
public:
	Brain();
	~Brain();
	
	std::string identify() const;
};

#endif
