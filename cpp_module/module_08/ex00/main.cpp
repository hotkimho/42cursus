/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:47:17 by hkim2             #+#    #+#             */
/*   Updated: 2022/07/02 21:12:17 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {

    std::vector<int> vec;
    int findArr[5] = {5, 31, 42, 10, 1};
    
    for (int i = 0; i <= 10; i++) {
        vec.push_back(i);
    }
    for (int i = 0; i < 5; i++) {
        if (easyfind(vec, findArr[i])) {
            std::cout << "Found Value: " << findArr[i] << std::endl;
        }
        else {
            std::cout << "Not Found Value: " << findArr[i] << std::endl;
        }
    }
}