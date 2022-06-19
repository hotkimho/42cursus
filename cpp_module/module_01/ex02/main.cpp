/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:39:04 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/19 17:15:33 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() 
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "address: " << &str << std::endl;
	std::cout << "address(PTR): " << stringPTR << std::endl;
	std::cout << "address(REF): " << &stringREF << std::endl;

	std::cout << "value: " << str << std::endl;
	std::cout << "value(PTR): " << *stringPTR << std::endl;
	std::cout << "value(REF): " << stringREF << std::endl;
	return 0;
}