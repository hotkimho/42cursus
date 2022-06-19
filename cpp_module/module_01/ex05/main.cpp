/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:39:04 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/19 19:38:46 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main() 
{
	Karen karen;

	std::string testStr[4] = {
		"INFO",
		"WARNING",
		"DEBUG",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
		karen.complain(testStr[i]);
	karen.complain("test");
	return 0;
}