/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:31:10 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/22 17:55:24 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog Default constrictor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &copy) {
    std::cout << "Dog Copy constrictor called" << std::endl;
    *this = copy;
}

Dog& Dog::operator=(const Dog &copy) {
    std::cout << "Dog Copy assignment constrictor called" << std::endl;
    type = copy.type;
    return *this;
}

Dog::~Dog() {
    std::cout <<  "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Bark sound" << std::endl;
}
