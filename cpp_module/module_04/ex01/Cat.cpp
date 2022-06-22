/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:31:10 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/22 20:02:45 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat Default constrictor called" << std::endl;
    type = "Cat";
    brain = new Brain();
    //for (int i = 0; i < 100; i++) {
    //    brain->setIdea((i + 1) + " Cat idea", i);
    //}
}

Cat::Cat(const Cat &copy) {
    std::cout << "Cat Copy constrictor called" << std::endl;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setIdea(copy.brain->getIdea(i), i);
    type = copy.type;
}

Cat& Cat::operator=(const Cat &copy) {
    std::cout << "Cat Copy assignment constrictor called" << std::endl;
    if (this->brain)
        delete brain;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
        brain->setIdea(copy.brain->getIdea(i), i);
    type = copy.type;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat Destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const {
    std::cout << "Meow sound" << std::endl;
}

void Cat::setBrainIdea(std::string idea, int idx) {
    this->brain->setIdea(idea, idx);
}

std::string Cat::getBrainIdea(int idx) {
    return this->brain->getIdea(idx);
}