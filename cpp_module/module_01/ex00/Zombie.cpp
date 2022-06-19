/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:20:29 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/19 16:44:58 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << _name << " create zombie" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " close zombie" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << " BraiiiiiiinnnzzzZ" << std::endl;
}

