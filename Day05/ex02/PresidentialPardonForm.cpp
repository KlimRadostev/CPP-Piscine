// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.cpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/23 03:43:49 by kradoste          #+#    #+#             //
//   Updated: 2019/07/23 06:56:36 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
	: Form(target, 25, 5) {}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
	: Form(obj.getName(), 25, 5) {}
PresidentialPardonForm::~PresidentialPardonForm(void) {}
PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &)
{ return (*this); }

void				PresidentialPardonForm::execute(Bureaucrat const &) const
{ std::cout << "<" << this->getName() << "> pardoned by Zaphod Beeblebrox.\n"; }
