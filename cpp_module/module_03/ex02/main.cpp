/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:32:47 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/20 19:33:35 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ScavTrap a("A");
    FragTrap b("B");

    a.attack("B");
    b.takeDamege(8);

    a.guardGate();
    b.beRepaired(5);

    b.highFivesGuys();
    a.attack("B");
    b.takeDamege(6);

    a.attack("B");
    b.takeDamege(5);

    a.attack("B");
    b.takeDamege(5);
	return 0;
}