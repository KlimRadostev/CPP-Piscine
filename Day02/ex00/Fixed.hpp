// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/18 15:59:16 by kradoste          #+#    #+#             //
//   Updated: 2019/08/01 20:20:14 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_H
# define FIXED_H

#include <string>

class   Fixed
{
public:
    Fixed(void);
    Fixed(Fixed const &fix);
    ~Fixed(void);

	Fixed				&operator=(Fixed const &rhs);
    int                 getRawBits(void) const;
    void                setRawBits(int const x);

private:
    int                 _point;
    static const int    _fractionalBits;
};

#endif
