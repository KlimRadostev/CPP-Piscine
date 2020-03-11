// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/22 21:16:01 by kradoste          #+#    #+#             //
//   Updated: 2019/07/23 06:54:49 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iomanip>
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const name, int const sign, int exec)
	: _name(name), _sign(sign), _exec(exec), _signed(false)
{
	if (sign < 1 || exec < 1)
		throw GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw GradeTooLowException();
}
Form::Form(Form const &obj)
	: _name(obj._name), _sign(obj._sign), _exec(obj._exec), _signed(obj._signed) {}
Form::~Form(void) {}

Form				&Form::operator=(Form const &) { return (*this); }

std::string const	Form::getName(void) const { return (this->_name); }
int 				Form::getSign(void) const { return (this->_sign); }
int					Form::getExec(void) const { return (this->_exec); }
bool				Form::getSigned(void) const { return (this->_signed); }

void				Form::beSigned(Bureaucrat &obj)
{
	if (obj.getGrade() > this->_sign)
		throw GradeTooLowException();
	this->_signed = true;
}

void				Form::execute(Bureaucrat const &obj) const
{
	if (this->_signed == false)
		throw NotSigned();
	else if (obj.getGrade() > this->_exec)
		throw GradeTooLowException();
	this->execute(obj);
}

typedef				Form::GradeTooHighException GradeTooHighException;
GradeTooHighException::GradeTooHighException(void) {}
GradeTooHighException::~GradeTooHighException(void) throw() {}
const char			*GradeTooHighException::what() const throw()
{ return "Grade is too high"; }

typedef				Form::GradeTooLowException GradeTooLowException;
GradeTooLowException::GradeTooLowException(void) {}
GradeTooLowException::~GradeTooLowException(void) throw() {}
const char			*GradeTooLowException::what() const throw()
{ return "Grade is too low"; }

typedef				Form::NotSigned NotSigned;
NotSigned::NotSigned(void) {}
NotSigned::~NotSigned(void) throw() {}
const char			*NotSigned::what() const throw()
{ return "Form isn't signed"; }

std::ostream		&operator<<(std::ostream &o, Form const &rhs)
{
	o << std::left;
	o << std::setw(22) << "FORM NAME: " << rhs.getName() << std::endl;
	o << std::setw(22) << "FORM SIGN GRADE: " << rhs.getSign() << std::endl;
	o << std::setw(22) << "FORM EXECUTION GRADE: " << rhs.getExec() << std::endl;
	o << std::setw(22) << "FORM SIGNED: " << (rhs.getSigned() ? "YES" : "NO") << std::endl;
	return (o);
}
