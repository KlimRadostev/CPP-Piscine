// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/22 15:20:18 by kradoste          #+#    #+#             //
//   Updated: 2019/07/23 02:04:30 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) :
	_name(obj._name), _grade(obj._grade) {}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat			&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_grade = rhs.getGrade();
	return (*this);
}

int					Bureaucrat::getGrade(void) const { return (this->_grade); }
std::string const	Bureaucrat::getName(void) const { return (this->_name); }

void				Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}

void				Bureaucrat::incrementGrade(void)
{
	this->setGrade(this->_grade - 1);
}

void				Bureaucrat::decrementGrade(void)
{
	this->setGrade(this->_grade + 1);
}

typedef					Bureaucrat::GradeTooHighException GradeTooHighException;

GradeTooHighException::GradeTooHighException(void) {}
GradeTooHighException::~GradeTooHighException(void) throw() {}

const char				*GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high |<1|");
}

typedef					Bureaucrat::GradeTooLowException GradeTooLowException;

GradeTooLowException::GradeTooLowException(void) {}
GradeTooLowException::~GradeTooLowException(void) throw() {}
const char				*GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low |>150|");
}

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << "<" << rhs.getName() << ">, bureaucrat grade <" <<
		rhs.getGrade() << ">." << std::endl;
	return (o);
}
