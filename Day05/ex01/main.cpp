// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/22 16:43:12 by kradoste          #+#    #+#             //
//   Updated: 2019/07/23 02:44:57 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "\n----------LOAD GOD LEVEL BUREAU-----------" << std::endl;
	Bureaucrat	god("KLIM GOD", 1);
	std::cout << god << std::endl;

	std::cout << "----------LOAD WEAK LEVEL BUREAU----------" << std::endl;
	Bureaucrat	noob("42 Noob", 42);
	std::cout << noob << std::endl;

	std::cout << "----------LOAD WEAK LEVEL FORM------------" << std::endl;
	Form		form1("Tax Form", 120, 90);
	std::cout << form1 << std::endl;

	std::cout << "----------LOAD MEDIUM LEVEL FORM----------" << std::endl;
	Form		form2("42 Entrance", 40, 80);
	std::cout << form2 << std::endl;

	std::cout << "----------QUICK FORM ERROR CHECKS---------" << std::endl;
	std::cout << "!151! for Signing grade:" << std::endl;
	try {
		Form	error_sign("Error Sign", 151, 42);
	}
	catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "!151! for Execute grade:" << std::endl;
	try {
		Form	error_exec("Error Exec", 42, 151);
	}
	catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl << std::endl;
	}

	std::cout << "----------CAN 42 NOOB SIGN WEAK FORM-------" << std::endl;
	form1.beSigned(noob);
	std::cout << noob << form1 << std::endl;

	std::cout << "----------CAN 42 NOOB SIGN MEDIUM FORM-----" << std::endl;
	try	{
		form2.beSigned(noob);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << form2 << std::endl;
		
	return (0);
}
