/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:31:10 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/22 18:49:04 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat Default constrictor called " << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) {
    std::cout << "WrongCat Copy constrictor called " << std::endl;
    *this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat &copy) {
    std::cout << "WrongCat Copy assignment constrictor called " << std::endl;
    type = copy.type;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout <<  "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat sound" << std::endl;
}