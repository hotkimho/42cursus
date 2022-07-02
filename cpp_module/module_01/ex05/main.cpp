/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:39:04 by hkim2             #+#    #+#             */
/*   Updated: 2022/07/03 01:36:15 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() 
{
	Harl harl;

	std::string testStr[4] = {
		"INFO",
		"WARNING",
		"DEBUG",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
		harl.complain(testStr[i]);
	harl.complain("test");
	return 0;
}