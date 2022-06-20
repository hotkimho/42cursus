/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:12:37 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/20 20:21:17 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &copy);
	Fixed& operator=(const Fixed &t);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);	
	int toInt(void) const;
	float toFloat(void) const;
	
	private:
	int fixPointNumber;
	static const int bits = 8;
};

std::ostream &operator<<(std::ostream &outStream, const Fixed &fix);
#endif