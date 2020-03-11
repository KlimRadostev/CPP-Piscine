// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/22 16:43:12 by kradoste          #+#    #+#             //
//   Updated: 2019/07/23 07:06:46 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

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

	std::cout << "----------LOAD INTERN---------------------" << std::endl;
	Intern		noob2;
	Form *Form1 = noob2.makeForm("Shrubbery Creation", "TREE");
	std::cout << *Form1 << std::endl;
	noob2.makeForm("Robotomy Request", "ROBOT");
	noob2.makeForm("Presidential Pardon", "PARDON");
	return (0);
}
