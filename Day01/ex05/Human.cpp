// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/17 18:23:37 by kradoste          #+#    #+#             //
//   Updated: 2019/07/17 18:30:57 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include "Brain.hpp"
#include "Human.hpp"

Human::Human()
{
	return ;
}

Human::~Human()
{
	return ;
}

const Brain	&Human::getBrain() const
{
	return (this->_brain);
}

std::string	Human::identify(void) const
{
	return (this->_brain.identify());
}
