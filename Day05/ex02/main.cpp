// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/22 16:43:12 by kradoste          #+#    #+#             //
//   Updated: 2019/07/23 06:12:22 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include "Form.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "\n----------LOAD GOD LEVEL BUREAU-----------" << std::endl;
	Bureaucrat	god("KLIM GOD", 1);
	std::cout << god << std::endl;

	std::cout << "----------LOAD WEAK LEVEL BUREAU----------" << std::endl;
	Bureaucrat	noob("42 Noob", 150);
	std::cout << noob << std::endl;

	std::cout << "----------LOAD SHRUBBERY------------------" << std::endl;
	ShrubberyCreationForm	obj1("TREE");
	noob.signForm(obj1);
	noob.executeForm(obj1);
	god.signForm(obj1);
	god.executeForm(obj1);
	std::cout << obj1 << std::endl;

	std::cout << "----------LOAD ROBOTOMY-------------------" << std::endl;
	RobotomyRequestForm		obj2("ROBOT");
	noob.signForm(obj2);
	noob.executeForm(obj2);
	god.signForm(obj2);
	god.executeForm(obj2);
	std::cout << obj2 << std::endl;

	std::cout << "----------LOAD PARDON---------------------" << std::endl;
	PresidentialPardonForm	obj3("PARDON");
	noob.signForm(obj3);
	noob.executeForm(obj3);
	god.signForm(obj3);
	god.executeForm(obj3);
	std::cout << obj3 << std::endl;

	return (0);
}
