/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:24:29 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/20 22:01:16 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	fixPointNumber = 0;
}

Fixed::Fixed(int value)
{
	fixPointNumber = (value << bits);
}

Fixed::Fixed(const float value)
{
	fixPointNumber = (int) roundf(value * (1 << bits));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed &op)
{
	fixPointNumber = op.fixPointNumber;
	return *this;
}

std::ostream &operator<<(std::ostream &outStream, const Fixed &fix)
{
	outStream << fix.toFloat();
	return outStream;
}

Fixed::~Fixed(void)
{}

int Fixed::getRawBits(void) const
{
	return fixPointNumber;
}

void Fixed::setRawBits(int const raw)
{
	fixPointNumber = raw;
}

int Fixed::toInt(void) const
{
	return fixPointNumber >> 8;
}

float Fixed::toFloat(void) const
{
	return (float)fixPointNumber / (float)(1 << bits);
}

Fixed Fixed::operator+(const Fixed &fix)
{
	Fixed newFix(toFloat() + fix.toFloat());

	return newFix;
}

Fixed Fixed::operator-(const Fixed &fix)
{
	Fixed newFix(toFloat() - fix.toFloat());

	return newFix;
}

Fixed Fixed::operator*(const Fixed &fix)
{
	Fixed newFix(toFloat() * fix.toFloat());

	return newFix;
}

Fixed Fixed::operator/(const Fixed &fix)
{
	Fixed newFix(toFloat() / fix.toFloat());
	
	return newFix;
}

bool Fixed::operator>(const Fixed &fix)
{
	return fixPointNumber > fix.getRawBits();
}

bool Fixed::operator<(const Fixed &fix)
{
	return fixPointNumber < fix.getRawBits();
}

bool Fixed::operator>=(const Fixed &fix)
{
	return fixPointNumber >= fix.getRawBits();
}

bool Fixed::operator<=(const Fixed &fix)
{
	return fixPointNumber <= fix.getRawBits();
}

bool Fixed::operator==(const Fixed &fix)
{
	return fixPointNumber == fix.getRawBits();
}

bool Fixed::operator!=(const Fixed &fix)
{
	return fixPointNumber != fix.getRawBits();
}

Fixed& Fixed::operator++(void)
{
	fixPointNumber++;
	return (*this);
}

Fixed& Fixed::operator--(void)
{
	fixPointNumber--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed newFix(*this);

	fixPointNumber++;
	return newFix;
}

Fixed Fixed::operator--(int)
{
	Fixed newFix(*this);

	fixPointNumber--;
	return newFix;
}

Fixed& Fixed::max(Fixed& fix1, Fixed& fix2)
{
	if (fix1.getRawBits() > fix2.getRawBits())
		return fix1;
	return fix2;
}

Fixed& Fixed::min(Fixed& fix1, Fixed& fix2)
{
	if (fix1.getRawBits() < fix2.getRawBits())
		return fix1;
	return fix2;
}

const Fixed& Fixed::max(const Fixed& fix1, const Fixed& fix2)
{
	if (fix1.getRawBits() > fix2.getRawBits())
		return fix1;
	return fix2;
}

const Fixed& Fixed::min(const Fixed& fix1, const Fixed& fix2)
{
	if (fix1.getRawBits() < fix2.getRawBits())
		return fix1;
	return fix2;
}