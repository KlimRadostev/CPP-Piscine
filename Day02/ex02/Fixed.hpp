// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: kradoste <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/07/18 23:37:29 by kradoste          #+#    #+#             //
//   Updated: 2019/07/18 23:39:44 by kradoste         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed &				operator=(Fixed const &rhs);

		bool				operator==(Fixed const &rhs) const;
		bool				operator!=(Fixed const &rhs) const;
		bool				operator<(Fixed const &rhs) const;
		bool				operator<=(Fixed const &rhs) const;
		bool				operator>(Fixed const &rhs) const;
		bool				operator>=(Fixed const &rhs) const;

		Fixed				operator+(Fixed const &rhs);
		Fixed				operator-(Fixed const &rhs);
		Fixed				operator/(Fixed const &rhs);
		Fixed				operator*(Fixed const &rhs);

		Fixed &				operator++(void);
		Fixed				operator++(int);
		Fixed &				operator--(void);
		Fixed				operator--(int);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

		static Fixed &		min(Fixed &a, Fixed &b);
		static const Fixed &min(Fixed const &a, Fixed const &b);
		static Fixed &		max(Fixed &a, Fixed &b);
		static const Fixed &max(Fixed const &a, Fixed const &b);
	private:
		int					_point;
		static const int	_fractionalBits;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
