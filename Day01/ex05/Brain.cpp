// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 18:00:11 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 18:55:30 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <sstream>
#include "Brain.hpp"

Brain::Brain()
{
	return ;
}

Brain::~Brain()
{
	return ;
}

std::string	Brain::identify() const
{
	std::stringstream	buff;
	buff << this;
	return (buff.str());
}
