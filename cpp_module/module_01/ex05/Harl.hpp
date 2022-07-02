/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:30:37 by hkim2             #+#    #+#             */
/*   Updated: 2022/07/03 01:35:51 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
	public:
	void complain(std::string level);
	Harl();
	~Harl();
	
	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
