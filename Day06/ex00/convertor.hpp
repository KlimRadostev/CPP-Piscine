C// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   convertor.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/23 21:16:45 by kradoste          #+#    #+#             //
//   Updated: 2019/07/28 03:12:01 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONVERTOR_H
# define CONVERTOR_H

#include <string>

class Convertor
{
public:
	Convertor(std::string input);
	Convertor(Convertor const &obj);
	~Convertor(void);

	Convertor	&operator=(Convertor const &rhs);

	operator	char(void) const;
	operator	int(void) const;
	operator	float(void) const;
	operator	double(void) const;

	class Impossible : public std::exception
	{
	public:
		Impossible(void);
		Impossible(Impossible const &obj);
		virtual ~Impossible(void) throw();
		Impossible	&operator=(Impossible const &rhs);
		
		char const		*what(void) const throw();
	};

private:
	std::string		_input;
};

#endif
