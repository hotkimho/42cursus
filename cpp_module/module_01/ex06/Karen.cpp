/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:24:29 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/19 19:50:44 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << "[debug]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << std::endl;
}

void Karen::info(void)
{
	std::cout << "[info]" << std::endl << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[warning]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << std::endl;
}

void Karen::error(void)
{
	std::cout << "[error]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Karen::complain(std::string level)
{
	void (Karen::*karenPtr[4])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			(this->*karenPtr[i])();
}

Karen::Karen(void)
{}

Karen::~Karen(void)
{}