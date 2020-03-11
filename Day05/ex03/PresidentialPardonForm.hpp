// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.hpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/23 03:43:12 by kradoste          #+#    #+#             //
//   Updated: 2019/07/23 04:45:50 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class   PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(const std::string target);
    PresidentialPardonForm(PresidentialPardonForm const &obj);
    ~PresidentialPardonForm(void);

    PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

    void    execute(Bureaucrat const &executor) const;
};

#endif
