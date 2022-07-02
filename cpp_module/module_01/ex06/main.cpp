/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:39:04 by hkim2             #+#    #+#             */
/*   Updated: 2022/07/03 01:38:35 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int harlFilter(std::string level)
{
	std::string testLevels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
		if (level == testLevels[i])
			return i;
	return 42;
}

int main(int argc, char *argv[]) 
{
	Harl harl;
	if (argc != 2)
	{
		std::cout << "Error : Wrong Arg" << std::endl;
		return (1);
	}

	std::string filterLevel = argv[1];
	int level = harlFilter(filterLevel);
	switch (level)
	{
	case 0:
		harl.complain("DEBUG");
	case 1:
		harl.complain("INFO");
	case 2:
		harl.complain("WARNING");
	case 3:
		harl.complain("ERROR");
		break;	
	default:
		std::cout << "[ Probably complaining about insignificant problems ]";
		std::cout << std::endl;
	}
	return 0;
}