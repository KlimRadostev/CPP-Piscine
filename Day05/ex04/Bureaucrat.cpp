// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/22 15:20:18 by kradoste          #+#    #+#             //
//   Updated: 2019/07/23 06:13:10 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{ this->setGrade(grade); }
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

void				Bureaucrat::incrementGrade(void) { this->setGrade(this->_grade - 1); }
void				Bureaucrat::decrementGrade(void) { this->setGrade(this->_grade + 1); }

void				Bureaucrat::signForm(Form &obj)
{
	if (obj.getSigned())
	{
		std::cout << "<" << this->_name << "> cannot sign <" << obj.getName()
				  << "> because it's signed\n";
	}
	else
		try {
			obj.beSigned(*this);
			std::cout << "<" << this->_name << "> signs <" << obj.getName() << ">\n";
		}
		catch (Form::GradeTooLowException &f) {
			std::cout << "<" << this->_name << "> cannot sign <" << obj.getName()
					  << "> because beuro's " << f.what()  << std::endl;
		}
}

void				Bureaucrat::executeForm(Form const &obj)
{
	if (this->_grade < obj.getExec())
	{
		std::cout << "<" << this->_name << "> executes <" << obj.getName() << std::endl;
		obj.execute(*this);
	}
	else
		std::cout << "<" << this->_name << "> Bureau's grade is too low to execute\n";
}

typedef					Bureaucrat::GradeTooHighException GradeTooHighException;
GradeTooHighException::GradeTooHighException(void) {}
GradeTooHighException::~GradeTooHighException(void) throw() {}
const char				*GradeTooHighException::what(void) const throw()
{ return ("Grade is too high"); }

typedef					Bureaucrat::GradeTooLowException GradeTooLowException;
GradeTooLowException::GradeTooLowException(void) {}
GradeTooLowException::~GradeTooLowException(void) throw() {}
const char				*GradeTooLowException::what(void) const throw()
{ return ("Grade is too low"); }

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << "<" << rhs.getName() << ">, bureaucrat grade <" <<
		rhs.getGrade() << ">" << std::endl;
	return (o);
}
