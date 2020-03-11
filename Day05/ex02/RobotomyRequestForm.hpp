// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/23 03:28:12 by kradoste          #+#    #+#             //
//   Updated: 2019/07/23 03:29:08 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class   RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm(const std::string target);
    RobotomyRequestForm(RobotomyRequestForm const &obj);
    ~RobotomyRequestForm(void);

    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

    void    execute(Bureaucrat const &executor) const;
};

#endif
