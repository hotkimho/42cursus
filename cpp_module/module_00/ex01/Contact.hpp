/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:15:56 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/19 16:18:47 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	public:
	void InputContact(void);
	void PrintContact(void);
	void PrintColumnValue(std::string value);
	void PrintALLContact(void);
	std::string getFirstName(void);

	private:
		std::string first_name;
		std::string last_name;
		std::string phone_number;
		std::string nickname;
		std::string darkest_secret;
};

#endif