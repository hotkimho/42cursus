/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:12:37 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/20 21:51:17 by hkim2            ###   ########.fr       */
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
	
	Fixed operator+(const Fixed &fix);
	Fixed operator-(const Fixed &fix);
	Fixed operator*(const Fixed &fix);
	Fixed operator/(const Fixed &fix);
	
	bool operator>(const Fixed &fix);
	bool operator<(const Fixed &fix);
	bool operator>=(const Fixed &fix);
	bool operator<=(const Fixed &fix);
	bool operator==(const Fixed &fix);
	bool operator!=(const Fixed &fix);

	Fixed& operator++(void);
	Fixed& operator--(void);
	//매개 변수 int는 값이 있는게 아니라 후위 연산자를 위한 구분
	Fixed operator++(int);
	Fixed operator--(int);
	
	static Fixed& max(Fixed& fix1, Fixed& fix2);
	static Fixed& min(Fixed& fix1, Fixed& fix2);

	static const Fixed& max(const Fixed& fix1, const Fixed& fix2);
	static const Fixed& min(const Fixed& fix1, const Fixed& fix2);
	private:
	int fixPointNumber;
	static const int bits = 8;
};

std::ostream &operator<<(std::ostream &outStream, const Fixed &fix);
#endif