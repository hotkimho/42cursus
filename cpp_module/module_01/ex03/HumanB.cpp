/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 17:28:19 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/19 18:07:59 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	std::cout << "HumanB: create instance" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "Close HumanB" << std::endl;
}

void HumanB::attack(void)
{
	std::cout << _name << " acctacks with " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}