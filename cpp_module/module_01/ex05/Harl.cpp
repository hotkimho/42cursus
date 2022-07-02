/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:24:29 by hkim2             #+#    #+#             */
/*   Updated: 2022/07/03 01:36:00 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[debug]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout << "[info]" << std::endl << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[warning]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout << "[error]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*HarlPtr[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			(this->*HarlPtr[i])();
}

Harl::Harl(void)
{}

Harl::~Harl(void)
{}