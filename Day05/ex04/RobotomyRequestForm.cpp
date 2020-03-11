// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/23 03:29:40 by kradoste          #+#    #+#             //
//   Updated: 2019/07/23 06:56:10 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
	: Form(target, 72, 45) {}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
	: Form(obj.getName(), 72, 45) {}
RobotomyRequestForm::~RobotomyRequestForm(void) {}
RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &)
{ return (*this); }

void				RobotomyRequestForm::execute(Bureaucrat const &) const
{
	if (std::rand() % 2 == 0)
		std::cout << "<" << this->getName() << "> Beep Boop ROBOTIMIZED" << std::endl;
	else
		std::cout << "<" << this->getName() << "> bEo.IP B.b.BeOp.p NOT ROBOTIMIZED\n";
}
