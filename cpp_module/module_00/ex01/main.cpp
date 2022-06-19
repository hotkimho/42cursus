/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:15:59 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/19 16:16:00 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string input;
	PhoneBook phonebook;
	phonebook.initIndex();
	while (true)
	{
		std::cout << "input : ";
		std::getline(std::cin, input);

		if (input == "ADD")
		{
			phonebook.AddContact();
		}
		else if (input == "SEARCH")
		{
			phonebook.SearchContact();
		}
		else if (input == "EXIT")
		{
			return (0);
		}
	}
}