/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:30:37 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/19 19:30:59 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen {
	public:
	void complain(std::string level);
	Karen();
	~Karen();
	
	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
