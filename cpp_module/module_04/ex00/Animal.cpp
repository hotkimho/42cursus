/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:58:35 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/22 18:42:34 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal Default constrictor called" << std::endl;
    type = "Animal";
}

Animal::Animal(const Animal &copy) {
    std::cout << "Animal Copy constrictor called" << std::endl;
    *this = copy;
}

Animal& Animal::operator=(const Animal &copy) {
    std::cout << "Animal Copy assignment constrictor called" << std::endl;
    type = copy.type;
    return *this;
}

Animal::~Animal() {
    std::cout <<  "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}

void Animal::setType(std::string type) {
    this->type = type;
}