/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:12:37 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/20 19:33:43 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed {
	public:
	Fixed();
	Fixed(const Fixed &copy);
	Fixed& operator=(const Fixed &t);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	
	private:
	int fixPointNumber;
	static const int bits = 8;
};
#endif