/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:00:17 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/22 19:27:14 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
    public:
    Brain();
    Brain(const Brain &copy);
    Brain& operator=(const Brain &copy);
    virtual ~Brain();
	
	void setIdea(std::string idea, int idx);
	std::string getIdea(int idx) const;
	
    private:
    std::string ideas[100];
};

#endif