/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:39:04 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/19 16:42:08 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
	Zombie* zombieA = newZombie("A");
	zombieA->announce();

	randomChump("B");

	delete zombieA;
	return 0;
}