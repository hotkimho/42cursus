/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:16:04 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/19 16:16:04 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	public:
	void AddContact(void);
	void SearchContact(void);
	void initIndex(void);
	void PrintColumn(void);
	void PrintSpace(int idx);
	void SelectContack(int idx);
	private:
	int idx;
	Contact contact[8];
};

#endif