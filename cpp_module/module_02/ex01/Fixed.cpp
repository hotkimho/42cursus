/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:24:29 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/20 21:04:17 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constrictor called" << std::endl;
	fixPointNumber = 0;
}

Fixed::Fixed(int value)
{
	std::cout << "Int constrictor called" << std::endl;
	fixPointNumber = (value << bits);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constrictor called" << std::endl;
	fixPointNumber = (int) roundf(value * (1 << bits));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed &op)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixPointNumber = op.fixPointNumber;
	return *this;
}

std::ostream &operator<<(std::ostream &outStream, const Fixed &fix)
{
	outStream << fix.toFloat();
	return outStream;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixPointNumber;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
}

int Fixed::toInt(void) const
{
	return fixPointNumber >> 8;
}

float Fixed::toFloat(void) const
{
	return (float)fixPointNumber / (float)(1 << bits);
}