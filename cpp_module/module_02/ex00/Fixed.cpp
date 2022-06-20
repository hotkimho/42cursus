/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:24:29 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/20 21:23:15 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constrictor called" << std::endl;
	fixPointNumber = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed &op)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixPointNumber = op.getRawBits();
	return *this;
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
	fixPointNumber = raw;
}