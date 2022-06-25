/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:47:17 by hkim2             #+#    #+#             */
/*   Updated: 2022/06/25 19:09:10 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template <typename T>
void print_element(const T& e) {
    std::cout << e << " ";
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::string str[5] = {
        "hkin",
        "hello",
        "world",
        "testText",
        "end"
    };

    iter(arr, 10, print_element);
    std::cout << std::endl;
    iter(str, 5, print_element);
   
}