/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:24:29 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/19 19:43:57 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << "[debug] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
}

void Karen::info(void)
{
	std::cout << "[info] I cannot believe adding extra bacon costs more money." << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[warning] I think I deserve to have some extra bacon for free." << std::endl;
}

void Karen::error(void)
{
	std::cout << "[error] This is unacceptable! I want to speak to the manager now." << std::endl;
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