// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/18 19:41:31 by kradoste          #+#    #+#             //
//   Updated: 2019/07/18 22:58:17 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_H
# define FIXED_H

#include <string>
#include <iostream>

class   Fixed
{
public:
    Fixed(void);
    Fixed(Fixed const &fix);
	Fixed(int const value);
	Fixed(float const value);
    ~Fixed(void);

	Fixed				&operator=(Fixed const &rhs);
    int                 getRawBits(void) const;
    void                setRawBits(int const x);
	int					toInt(void) const;
	float				toFloat(void) const;

private:
    int                 _point;
    static const int    _fractionalBits;
};

std::ostream &operator<<(std::ostream &out, Fixed const &in);

#endif
