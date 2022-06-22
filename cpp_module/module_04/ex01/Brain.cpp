/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:31:10 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/22 19:26:53 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain Default constrictor called" << std::endl;
}

Brain::Brain(const Brain &copy) {
    std::cout << "Brain Copy constrictor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.getIdea(i);
}

Brain& Brain::operator=(const Brain &copy) {
    std::cout << "Brain Copy assignment constrictor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.getIdea(i);
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain Destructor called" << std::endl;
}

void Brain::setIdea(std::string idea, int idx) {
    this->ideas[idx] = idea;
}

std::string Brain::getIdea(int idx) const {
    return this->ideas[idx];
}