/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:39:04 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/19 17:00:57 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
	Zombie* zombies = zombieHorde(5, "hkim");
	for (int i = 0; i < 5; i++)
		zombies[i].announce();
	delete []zombies;
	return 0;
}