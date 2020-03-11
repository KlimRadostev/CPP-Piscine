// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/23 06:16:14 by kradoste          #+#    #+#             //
//   Updated: 2019/07/23 06:58:50 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void) {}
Intern::Intern(Intern const &) {}
Intern::~Intern(void) {}
Intern	&Intern::operator=(Intern const &) { return (*this);}

Form	*Intern::makeForm(std::string form, std::string target)
{
	if (form == "Shrubbery Creation")
	{
		std::cout << "Intern Created: " << form << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	else if (form == "Robotomy Request")
	{
		std::cout << "Intern Created: " << form << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if (form == "Presidential Pardon")
	{
		std::cout << "Intern Created: " << form << std::endl;
		return (new PresidentialPardonForm(target));
	}
	std::cout << "Unknown Form for Intern: " << form << std::endl;
	return (NULL);
}
