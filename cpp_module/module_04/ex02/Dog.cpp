/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:31:10 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/22 20:50:18 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog Default constrictor called" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog &copy) {
    std::cout << "Dog Copy constrictor called" << std::endl;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setIdea(copy.brain->getIdea(i), i);
    type = copy.type;
}

Dog& Dog::operator=(const Dog &copy) {
    std::cout << "Dog Copy assignment constrictor called" << std::endl;
    if (this->brain)
        delete brain;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setIdea(copy.brain->getIdea(i), i);
    type = copy.type;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog Destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const {
    std::cout << "Bark sound" << std::endl;
}

void Dog::setBrainIdea(std::string idea, int idx) {
    this->brain->setIdea(idea, idx);
}

std::string Dog::getBrainIdea(int idx) {
    return this->brain->getIdea(idx);
}