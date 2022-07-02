/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:47:17 by hkim2             #+#    #+#             */
/*   Updated: 2022/07/03 00:43:14 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    Array<int> intArray(10);
    intArray.setArray(10);

    std::cout << "original Array" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    Array<int> copyArray = intArray;
    std::cout << std::endl;
    copyArray.setIndexValue(9, 999);
    std::cout << "copy Array" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << copyArray[i] << " ";
    }
    std::cout << std::endl;
    
    Array<int> assignArray = intArray;
    std::cout << std::endl;
    assignArray.setIndexValue(5, 555);
    std::cout << "assign Array" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << assignArray[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "original Array" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << intArray[i] << " ";
    }
}