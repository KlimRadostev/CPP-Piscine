// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/22 16:43:12 by kradoste          #+#    #+#             //
//   Updated: 2019/07/23 01:40:40 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "#Bureaucrats attack" << std::endl;
	Bureaucrat one("Manu", 42);
	std::cout << one;

	std::cout << "New Grade: " << std::endl;
	one.setGrade(100);
	std::cout << one << std::endl;

	std::cout << "Trying Grade 420..." << std::endl;
	try {
		Bureaucrat low_grade("Sapp", 420);
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Trying Grade 0..." << std::endl;
	try {
		Bureaucrat high_grade("Thomas", 0);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	one.setGrade(15);
	std::cout << one << "Dynamic increase: " << std::endl;
	try {
		while (true)
		{
			one.incrementGrade();
			std::cout << one.getGrade() << " | ";
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << one << std::endl;
	one.setGrade(140);
	std::cout << one << "Dynamic decrease: " << std::endl;
	try {
		while (true)
		{
			one.decrementGrade();
			std::cout << one.getGrade() << " | ";
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << one << std::endl;
	return (0);
}
