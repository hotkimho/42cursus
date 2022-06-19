/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 17:28:19 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/19 17:49:56 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon(void)
{
	std::cout << _type << " Close Weapon" << std::endl;
}

const std::string& Weapon::getType(void)
{
	return _type;
}

void Weapon::setType(std::string type)
{
	_type = type;
}