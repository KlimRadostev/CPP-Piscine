// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/23 06:16:26 by kradoste          #+#    #+#             //
//   Updated: 2019/07/23 06:23:46 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef INTERN_H
# define INTERN_H

#include <string>
#include "Form.hpp"

class	Intern
{
public:
	Intern(void);
	Intern(Intern const &obj);
	~Intern(void);
	Intern			&operator=(Intern const &rhs);
	
	Form			*makeForm(std::string form, std::string target);
};

#endif
