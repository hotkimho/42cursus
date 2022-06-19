/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 17:28:19 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/19 17:42:03 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _weapon(weapon)
{
	_name = name;
	std::cout << "HumanA: create instance" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "Close HumanA" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << _name << " acctacks with " << _weapon.getType() << std::endl;
}