// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/22 15:19:38 by kradoste          #+#    #+#             //
//   Updated: 2019/07/22 22:45:15 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <string>
#include <iostream>

class Bureaucrat
{
public:
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const &obj);
	~Bureaucrat(void);
	Bureaucrat		&operator=(Bureaucrat const &rhs);

	void					setGrade(int grade);

	int						getGrade(void) const;
	std::string const		getName(void) const;

	void					incrementGrade(void);
	void					decrementGrade(void);
	
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(void);
		~GradeTooHighException(void) throw();
		const char				*what(void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException(void);
		~GradeTooLowException(void) throw();
		const char				*what(void) const throw();
	};
	
private:
	std::string const		_name;
	int						_grade;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
