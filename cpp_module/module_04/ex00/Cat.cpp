/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:31:10 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/22 18:06:44 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat Default constrictor called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &copy) {
    std::cout << "Cat Copy constrictor called" << std::endl;
    *this = copy;
}

Cat& Cat::operator=(const Cat &copy) {
    std::cout << "Cat Copy assignment constrictor called" << std::endl;
    type = copy.type;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow sound" << std::endl;
}