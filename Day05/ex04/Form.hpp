// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/22 21:15:37 by kradoste          #+#    #+#             //
//   Updated: 2019/07/23 06:52:59 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FORM_H
# define FORM_H

#include <string>
#include <iostream>

class	Bureaucrat;

class	Form
{
public:

	Form(std::string const name, int const sign, int exec);
	Form(Form const &obj);
	~Form(void);
	Form				&operator=(Form const &rhs);

	std::string const	getName(void) const;
	int					getSign(void) const;
	int					getExec(void) const;
	bool				getSigned(void) const;

	void				beSigned(Bureaucrat &obj);
	virtual void		execute(Bureaucrat const &obj) const;

	class	GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(void);
		~GradeTooHighException(void) throw();
		const char	*what() const throw();
	};
	class	GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(void);
		~GradeTooLowException(void) throw();
		const char	*what() const throw();
	};
	class	NotSigned : public std::exception
	{
	public:
		NotSigned(void);
		~NotSigned(void) throw();
		const char	*what() const throw();
	};

private:
	std::string const	_name;
	int const			_sign;
	int					_exec;
	bool				_signed;
};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);

#endif
